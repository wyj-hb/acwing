// #include <bits/stdc++.h>
// using namespace std;
// int n;
// const int N = 2001;
// int d[N][N];
// void init()
// {
//     for(int i =0;i<=2000;i++) {
//         for(int j = 0;j<=i;j++) {
//             if(j == 0) d[i][j]=1;
//             else {
//                 //不包含数据和包含的
//                 d[i][j] = d[i-1][j] + d[i-1][j-1];
//             }
//         }
//     }
// }
// int main()
// {
//     init();
//     scanf("%d",&n);
//     int a,b;
//     while(n--) {
//         //n个查询
//         scanf("%d%d",&a,&b);
//         printf("%d",d[a][b]);
//     }
//     return 0;
// }