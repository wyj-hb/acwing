// #include <bits/stdc++.h>
// using namespace std;
// /*
// *      3
//         -1 1
//         2 4
//         3 5
//  */
//
// /*
//  *      2
//  */
// const int N = 100010;
// struct node {
//     int l;
//     int r;
//     //重载运算符
//     const bool operator < (const node& n) const{
//         return r < n.r;
//     }
// }d[N];
// int ed = -0x3f3f3f3f;
// int n;
// int main()
// {
//     //选择最少的区间,使得覆盖所有的区间
//     //思路:每次优点选择右端点值最小的点
//     scanf("%d",&n);
//     int l,r;
//     for(int i = 1;i<=n;i++) {
//         scanf("%d%d",&l,&r);
//         d[i] = {l,r};
//     }
//     sort(d,d+n);
//     int res = 0;
//     //选择每个区间的最右端点
//     for(int i = 1;i<=n;i++) {
//         if(ed < d[i].l) {
//             res++;
//             ed = d[i].r;
//         }
//     }
//     printf("%d",res);
//     return 0;
// }