// #include <bits/stdc++.h>
// using namespace std;
// /*
//    10 2
//    11
//  */
// /*
//  *  1011
//  */
// int M,N;
// string n;
// int z[40];
// int num;
// int to_ten(string d,int M) {
//     //转为10机制
//     int y = 0,product =1;//y是转化后的值,product是阶
//     while(d != 0) {
//         //取个位
//         y = y + (d % 10) * product;
//         d = d /10;
//         product = product * M;
//     }
//     return y;
// }
//
// //转为10->N进制
// void convert(int d,int N) {
//     //除基取余发
//     memset(z,0,sizeof z);
//     num = 0;
//     do {
//         z[num++] = d % N;
//         d = d / N;
//     }while(d != 0);
// }
// void solve() {
//     //将M进制数n转为N进制
//     int a = to_ten(n,M);
//     convert(a,N);
//     for(int i = num-1;i>=0;i--) {
//         printf("%d",z[i]);
//     }
//     printf("\n");
// }
// int main()
// {
//     //可能存在字母,输入的是大写
//     scanf("%d%d%s",&M,&N,&n);
//     solve();
//     return 0;
// }