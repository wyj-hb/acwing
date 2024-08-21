#include <bits/stdc++.h>
using namespace std;
/*
    4 9 2
    6 1
    5 1
    6 2
    7 1
 */
/*
    5
 */
typedef pair<int,int> PIL;
//开垦区域总数、资源总数以及每块区域最少开垦天数
int n,m,k;
const int N = 100010;
PIL d[N];
int se[N],de[N];
int find_lower(int l,int r,int data) {
    while(l < r) {
        int mid = l + r >> 1;
        if(d[mid].first >= data) {
            r = mid;
        }
        else {
            l = mid+1;
        }
    }
    return l;
}
void insert(int l,int r,int c)
{
    se[l]+=c;
    se[r + 1]-=c;
}
int main()
{
    scanf("%d%d%d",&n,&m,&k);
    int t,c;
    //每次定位当前耗时最多的,并将资源分配给他
    for(int i = 1;i<=n;i++) {
        scanf("%d%d",&t,&c);
        d[i] = make_pair(t,c);
    }
    sort(d+1,d+1+n);
    for(int i = 1;i<=n;i++)
    {
        //差分
        insert(i,i,d[i].first);
        //前缀和
        de[i] = de[i-1] + d[i].second;
    }
    int min = de[n] - de[0];
    //左边界
    int l = find_lower(1,n+1,d[n].first);
    while(true)
    {
        if(l == 1) {
            //说明终生平等
            int res = se[1] - m / min;
            if(res <= k) {
                se[1] = k;
            }
            else {
                se[1] = res;
            }
            break;
        }
        //可以下降的范围
        int distance = se[l];
        //最大的数一共需要减去的值
        int da=de[n] - de[l-1];
        //不够减
        if(distance * da > m)
        {
            int s = m / da;
            insert(l,n,-s);
            break;
        }
        else
        {
            //够
            insert(l,n,-distance);
            m-=distance * da;
            for(int i = l;;i--)
            {
                if(se[i] == 0)
                {
                    l--;
                }
                else
                {
                    break;
                }
            }
        }
    }
    //重建数据
    for(int i = 1;i<=n;i++) {
        d[i].first = d[i-1].first + se[i];
    }
    printf("%d",d[n].first);
    return 0;
}