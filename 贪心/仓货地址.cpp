// #include <bits/stdc++.h>
// using namespace std;
//
// /*
// *   4
//     6 2 9 1
//  */
//
// /*
//  *  12
//  */
// const int N = 100010;
// int n;
// int d[N];
// int main()
// {
//     scanf("%d",&n);
//     for(int i = 1;i<=n;i++) {
//         scanf("%d",&d[i]);
//     }
//     sort(d+1,d+n+1);
//     int res = 0;
//     for(int i = 1;i<=n/2;i++) {
//         res +=d[n-i + 1] - d[i];
//     }
//     printf("%d",res);
//     return 0;
// }