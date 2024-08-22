#include <bits/stdc++.h>
using namespace std;
/*
    6
    3
    2
    6
    1
    1
    2
 */
/*
    3
    3
    0
    6
    6
    0
 */
typedef pair<int,int> PIL;
const int N = 1e5 + 10;
PIL d[N];
int n;
int tt = -1;
int dd[N];
int main()
{
    scanf("%d",&n);
    int m;
    scanf("%d",&m);
    for(int i = 1;i<=n;i++) {
        //栈为空则直接入栈
        if(tt == -1) {
            //索引和值
            d[++tt] = make_pair(i,m);
            scanf("%d",&m);
        }
        else {
            //有数据,比较
            int top = d[tt].second;
            //符合条件直接入栈
            if(top >= m) {
                d[++tt] = make_pair(i,m);
                if(i < n) {
                    scanf("%d",&m);
                }
            }
            else {
                //出栈
                dd[d[tt].first] = i;
                tt--;
                i--;
            }
        }
    }
    for(int i = 1;i<=n;i++) {
        printf("%d\n",dd[i]);
    }
    return 0;
}