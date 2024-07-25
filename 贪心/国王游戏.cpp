// #include <bits/stdc++.h>
// using namespace std;
// /*
//     3
//     1 1
//     2 3
//     7 4
//     4 6
//  */
//
// /*
//  *  2
//  */
// typedef long long LL;
// const int N = 1010;
// struct node {
//     int l,r;
//     const bool operator<(const node& d) const {
//         return l*r < d.l *d.r;
//     }
// }d[N];
// int n;
// int main()
// {
//     scanf("%d",&n);
//     int a,b;
//     for(int i = 1;i<=n+1;i++) {
//         scanf("%d%d",&a,&b);
//         d[i] = {a,b};
//     }
//     LL lrc = 1;
//     LL res = d[1].l;
//     sort(d+2,d+n+2);
//     for(int i = 2;i<=n+1;i++) {
//         res = max(res,lrc / d[i].r);
//         lrc = lrc * d[i].l;
//     }
//     printf("%lld",res);
//     return 0;
// }
//
// /*
// *  10
// 5 7
// 4 2
// 7 3
// 7 2
// 4 4
// 1 7
// 5 3
// 6 1
// 4 5
// 2 3
// 3 7
//  */
//
// /*
//  * 134400
//  */