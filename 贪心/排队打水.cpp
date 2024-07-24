// #include <bits/stdc++.h>
// using namespace std;
// /*
// *  7
//   3 6 1 4 2 5 7
//  */
// /*
//  *  56
//  */
// const int N = 100010;
// int d[N];
// int n;
// int main()
// {
//     scanf("%d",&n);
//     for(int i = 1;i<=n;i++) {
//         scanf("%d",&d[i]);
//     }
//     sort(d+1,d+1+n);
//     int res = 0;
//     for(int i = 1;i<=n;i++) {
//         res +=d[i] * (7 - i);
//     }
//     printf("%d",res);
//     return 0;
// }