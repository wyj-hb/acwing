// class Solution {
// public:
//     const static int N = 15;
//     int d[N][N];
//     int winningPlayerCount(int n, vector<vector<int>>& pick) {
//         for(auto c : pick) {
//             // printf("%d%d",c[0],c[1]);
//             d[c[0]][c[1]] ++;
//         }
//         int cnt = 0;
//         for(int i = 0;i<n;i++) {
//             int flag = 0;
//             int ishave = 0;
//             for(int j = 0;j <= 10;j++) {
//                 if(d[i][j] == 0) {
//                     continue;
//                 }
//                 if(d[i][j] > i) {
//                     ishave = 1;
//                     break;
//                 }
//             }
//             if(flag == 0 && ishave) {
//                 cnt++;
//             }
//         }
//         return cnt;
//     }
// };