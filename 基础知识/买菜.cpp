#include <bits/stdc++.h>
using namespace std;
/*
*   4
    1 3
    5 6
    9 13
    14 15
    2 4
    5 7
    10 11
    13 14
 */
/*
 *3
 */
typedef pair<int,int> PIL;
int n;
int main()
{
    scanf("%d",&n);
    vector<PIL> v1,v2;
    int a1 = 0,a2 = 0;
    int l,r;
    for(int i = 1;i<=n;i++) {
        scanf("%d%d",&l,&r);
        v1.push_back(make_pair(l,r));
    }
    for(int i = 1;i<=n;i++) {
        scanf("%d%d",&l,&r);
        v2.push_back(make_pair(l,r));
    }
    a2 = 0;
    int sum = 0;
    for(int i = 0;i<n && a2 < n;i++) {
        int r1 = v1[i].second;
        //2 的左区间 大于 1的左区间
        while(a2 < n && v2[a2].second <= v1[i].first ) {
            a2++;
        }
        if(a2 == n)
        {
            break;
        }
        //1 的 右区间要大于 2的 左区间
        if(r1 <= v2[a2].first) {
            //枚举掉直到找到重叠区间
            continue;
        }
        // printf("l1 : %d,r1 : %d,l2 : %d,r2 : %d",v1[i].first,v1[i].second,v2[a2].first,v2[a2].second);
        //现一定有重合
        if(v2[a2].second <= r1) {
            //有剩余
            int dd = v2[a2].first > v1[i].first ? v2[a2].first : v1[i].first;
            sum +=v2[a2].second - dd;
            v1[i].first = v2[a2].second;
            // printf("  data : %d\n",v2[a2].second - v2[a2].first);
            if(v1[i].first != v1[i].second) {
                i--;
            }
            a2++;
        }
        else {
            int dd = v2[a2].first > v1[i].first ? v2[a2].first : v1[i].first;
            sum += r1 - dd;
            // printf(" data : %d\n",r1 - v2[a2].first);
            v2[a2].first = r1;
        }
    }
    printf("%d",sum);
    return 0;
}