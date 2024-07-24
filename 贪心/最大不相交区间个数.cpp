// #include <bits/stdc++.h>
// using namespace std;
// /*
// *   3
//     -1 1
//     2 4
//     3 5
//  */
// /*
//  *  2
//  */
// const int N = 100010;
// int n;
// const int min_data = 0x3f3f3f3f;
// int dd = -min_data;
// struct node{
//     int l,r;
//     const bool operator<(const node& d) const {
//         return r <d.r;
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
//     sort(d+1,d+n+1);
//     int res = 0;
//     for(int i = 1;i<=n;i++) {
//         if(dd < d[i].l) {
//             res++;
//             dd = d[i].r;
//         }
//     }
//     printf("%d",res);
//
//     return 0;
// }