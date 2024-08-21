#include <bits/stdc++.h>
using namespace std;
/*
    6 2 10
    5 24
    10 24
    11 24
    34 24
    35 24
    35 48
    1
    2
 */
/*
    3
    3
 */
const int N = 200010;
int n,m,k;
int d[N], a[N];
void insert(int l,int r) {
    if(l < 0) {
        l = 0;
    }
    if(r < 0) {
        return;
    }
    d[l] += 1;
    d[r+1] -=1;
}
int main()
{
    scanf("%d%d%d",&n,&m,&k);
    int t,c;
    for(int i = 1;i<=n;i++) {
        //t时刻进入,持有c个小时内有效的检测结果
        scanf("%d%d",&t,&c);
        insert(t-c+1-k,t-k);
    }
    a[0] = d[0];
    for(int i = 1;i<=N;i++) {
        a[i] = a[i-1] + d[i];
        // printf("i:%d data:%d\n",i,a[i]);
    }
    int q;
    while(m--) {
        scanf("%d",&q);
        printf("%d\n",a[q]);
    }
    return 0;
}