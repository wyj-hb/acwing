// #include <bits/stdc++.h>
// using namespace std;
// /*
// *   3
//     10 3
//     2 5
//     3 3
//  */
// /*
//  *  2
//  */
// int n;
// const int N = 50010;
// struct node {
//     int l,r;
//     const bool operator<(const node& d)const {
//         return l+r<d.l+d.r;
//     }
// }d[N];
// int main()
// {
//     scanf("%d",&n);
//     int l,r;
//     for(int i = 1;i<=n;i++) {
//         scanf("%d%d",&l,&r);
//         d[i] = {l,r};
//     }
//     sort(d+1,d+1+n);
//     int res = -0x3f3f3f3f;
//     int sum = 0;
//     for(int i = 1;i<=n;i++)
//     {
//         res = max(res,sum - d[i].r);
//         sum +=d[i].l;
//     }
//     printf("%d",res);
//     return 0;
// }