// class Solution
// {
// public:
//     bool solve(char data)
//     {
//         string str = "aeiou";
//         if(str.find(data) != string::npos)
//         {
//             return true;
//         }
//         else
//         {
//             return false;
//         }
//     }
//     bool doesAliceWin(string s)
//     {
//         //strlne(长度)
//         int fast = 0,slow = 0;
//         int cnt;
//         while(slow < s.size())
//         {
//             cnt = 0;
//             int origin = slow;//不变即out
//             while(fast <s.size()) {
//                 if(solve(s[fast]))
//                 {
//                     cnt++;
//                 }
//                 if(cnt % 2 != 0)
//                 {
//                     fast++;
//                     //slow指向新的位置
//                     slow = fast;
//                 }
//                 else {
//                     fast++;
//                 }
//             }
//             if(slow == origin)
//             {
//                 return false;
//             }
//             origin = fast = slow;
//             cnt = 0;
//             while(fast < s.size()) {
//                 if(solve(s[fast]))
//                 {
//                     cnt++;
//                 }
//                 if(cnt % 2 == 0)
//                 {
//                     fast++;
//                     //slow指向新的位置
//                     slow = fast;
//                 }
//                 else {
//                     fast++;
//                 }
//             }
//             if(slow == origin) {
//                 return true;
//             }
//         }
//         return false;
//     }
// };