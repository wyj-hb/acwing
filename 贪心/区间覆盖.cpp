// #include <bits/stdc++.h>
// using namespace std;
// /*
// *      1 5
//         3
//         -1 3
//         2 4
//         3 5
//  */
// /*
//         2
// */
// int s,t;
// const int min_data = 0x3f3f3f3f;
// const int N = 100010;
// struct node {
//     int l,r;
//     const bool operator<(const node& d)const {
//         return l< d.l;
//     }
// }d[N];
// int main()
// {
//     scanf("%d%d",&s,&t);
//     //无法完全覆盖输出-1
//     int n;
//     scanf("%d",&n);
//     int l,r;
//     for(int i = 1;i<=n;i++) {
//      scanf("%d%d",&l,&r);
//      d[i] = {l,r};
//     }
//     int cnt = 0;
//     sort(d+1,d+n+1);
//     for(int i = 1;i<=n;i++) {
//         int j = i;
//         //
//         int res = -min_data;
//         while(j <= n && d[j].l <= s)//小于s表示一定包裹原始区间
//         {
//             res = max(res,d[j].r);
//             j++;
//         }
//         if(res == -min_data) {
//             //出现了空隙
//             printf("-1");
//         }
//         else {
//             cnt++;
//             s = res;
//             if(res >= t) {
//                 printf("%d",cnt);
//                 return 0;
//             }
//             //指针跳跃
//             i = j;
//         }
//     }
//
//     return 0;
// }