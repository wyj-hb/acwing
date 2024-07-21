// class Solution {
// public:
//     int minChanges(int n, int k)
//     {
//         //修改n的任意一位任意位1的->0
//         int cnt = 0;
//         int d = 0;
//         if(n < k) {
//             return -1;
//         }
//         while(n >> cnt && k >> cnt) {
//             int a = n>>cnt & 1;
//             int b = k>>cnt & 1;
//             if(a != b && a == 0) {
//                 return -1;
//             }
//             else if(a != b){
//                 //a==1
//                 d++;
//             }
//             cnt++;
//         }
//         while(n>>cnt)
//         {
//             if(((n>>cnt) & 1) != 0) {
//                 d++;
//             }
//             cnt++;
//         }
//         return d;
//     }
// };