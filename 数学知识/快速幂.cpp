// #include <bits/stdc++.h>
// using namespace std;
// /*
//  *2
//  *3 2 5
//  *4 3 9
//  */
// /*
//  4
//  1
//  */
// int n;
// int a,b,q;
// void ksm() {
//     //求a的b次方关于q的幂
//     int res = 1;
//     int p = a;
//     while(b) {
//         //取最后一位
//         if(b & 1) res =res * p % q;
//         p = p * a % q;
//         b = b>>1;
//     }
//     printf("%d\n",res);
// }
// int main()
// {
//     scanf("%d",&n);
//     while(n--) {
//         scanf("%d%d%d",&a,&b,&q);
//         ksm();
//     }
//     return 0;
// }