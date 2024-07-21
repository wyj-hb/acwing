// #include <bits/stdc++.h>
// using namespace std;
// /*
//  * s = "1001101"
//  */
//
// /*
//  *4
//  */
// const int N = 1e5 +1;
// char str[N];
// int main()
// {
//     string str;
//     cin>>str;
//     int cnt = 0;
//     int start = 0;
//     int begin_s = 1;
//     //去除为0的
//     while(start < str.size() && str[start] == '0') {
//         start++;
//     }
//     if(start == str.size()){
//         printf("%d",cnt);
//         return 0;
//     }
//     while(true)
//     {
//         //开始扫描,start是第一个1的位置
//         int s = start + 1;
//         while(s<str.size() && str[s] == '0')
//         {
//             s++;
//         }
//         if(s == str.size()) {
//             break;
//         }
//         //s-1是本次的起始位置
//         int ss = begin_s;
//         while(ss<str.size() && str[ss] == '0')
//         {
//             ss++;
//         }
//         str[ss-1] = '1';
//         str[s-1] = '0';
//         cnt++;
//         if(s - 2 >= 0)
//         {
//             start = s-2;
//         }
//         if(ss -2 >= 0) {
//             begin_s = ss-2;
//         }
//     }
//     printf("%d",cnt);
//     return 0;
// }