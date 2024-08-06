// #include <bits/stdc++.h>
// using namespace std;
// /*
//    12
//    23
//  */
// /*
//  *  35
//  */
// vector<int> C;
// bool compare(vector<int> A,vector<int> B) {
//     //比较两个数组的大小
//     if(A.size() != B.size()) return A.size() > B.size();
//     for(int i = 0;i<A.size();i++) {
//         if(A[i] != B[i]) {
//             return A[i] > B[i];
//         }
//     }
//     //完全相等返回true
//     return true;
// }
//  void add(vector<int> A,vector<int> B)
//  {
//      //保证A比B的位数大于等于
//      if(compare(A,B) == false) {
//          add(B,A);
//          return;
//      }
//      //相加
//      int t = 0;//代表进位
//      for(int i = 0;i<A.size();i++) {
//          t +=A[i];
//          if(i < B.size()) {
//              //B没超范围
//              t +=B[i];
//          }
//          C.push_back(t % 10);
//          t = t / 10;
//      }
//      if(t !=0) {
//          C.push_back(t);
//      }
//  }
//  int flag;
//  void sub(vector<int>A,vector<int> B) {
//      // 保证A比B的位数大于等于
//      if(compare(A,B) == false) {
//          flag = 1;
//          sub(B,A);
//          return;
//      }
//      //A>=B
//      int t = 0;//借位
//      for(int i = 0;i<A.size();i++) {
//          t = A[i] - t;
//          if(i < B.size()) t-=B[i];
//          C.push_back((t + 10) % 10);
//          if(t < 0) t = 1;
//          else {
//              t = 0;
//          }
//      }
//      //减法会有前导零
//      while(C.size() >=1 && C.back() == 0) {
//          C.pop_back();
//      }
//  }
// // 乘除法不考虑负数
//  void pl(vector<int> A,int b) {
//      int t =0;
//      for(int i = 0;i<A.size() || t;i++) {
//          if (i < A.size()) t += b * A[i];
//          C.push_back(t % 10);
//          t = t /10;
//      }
//  }
//  void div(vector<int> A,int b) {
//      int t =0;
//      for(int i = A.size()-1;i>=0;i--)
//      {
//          t = t*10 + A[i];
//          C.push_back(t / b);
//          t = t % b;
//      }
//      reverse(C.begin(),C.end());
//      // 除法可能会有前导零
//      while(C.size() >=1 && C.back() == 0) {
//          C.pop_back();
//      }
//  }
// int main()
// {
//     vector<int> A;
//     vector<int> B;
//     string a;string b;
//     while(cin>>a>>b) {
//         //高位放后面
//         A.clear();B.clear();
//         for(int i = a.size()-1;i>=0;i--) {
//             A.push_back(a[i] - '0');
//         }
//         for(int i = b.size()-1;i>=0;i--) {
//             B.push_back(b[i] - '0');
//         }
//         C.clear();
//         add(A,B);
//         //减法时候需要用符号
//         // if(flag) {
//         //     cout<<"-";
//         //     flag = 0;
//         // }
//         for(int j = C.size() - 1;j>=0;j--) {
//             cout<<C[j];
//         }
//         cout<<endl;
//     }
//     return 0;
// }