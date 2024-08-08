// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     vector<vector<int>> v{{0,1},{0,1},{0,0}};
//     int cnt1 = 0;int cnt2 = 0;
//     //m*n
//     for(int i = 0;i<v.size();i++) {
//         //遍历所有的行
//         int s1 = 0,s2 = v[i].size() - 1;
//         while(s1 < s2) {
//             if(v[i][s1++] != v[i][s2--]) {
//                 cnt1++;
//             }
//         }
//     }
//     for(int i = 0;i<v[0].size();i++) {
//         //遍历所有的列
//         int s1 = 0,s2 = v.size() - 1;
//         while(s1 < s2) {
//             if(v[s1++][i] != v[s2--][i]) {
//                 cnt2++;
//             }
//         }
//     }
//     printf("%d %d",cnt1,cnt2);
//     return cnt1 ? cnt1 < cnt2 : cnt2;
// }