#include <bits/stdc++.h>
using namespace std;
/*
    123456789012345678901234567890
    123456789012345678901234567890
    123456789012345678901234567890
    0
 */
/*
    370370367037037036703703703670
 */
const int N = 1e5 + 10;
vector<int> res;
vector<int> C;
vector<int> d;
string s;
bool compare(vector<int> A,vector<int> B) {
    if(A.size() != B.size()) {
        return A.size() > B.size();
    }
    for(int i = A.size() - 1;i>=0;i--) {
        //从高位开始对比
        if(A[i] != B[i]) {
            return A[i] > B[i];
        }
    }
    //完全相等则返回true
    return true;
}
vector<int> add(vector<int> A,vector<int> B) {
    // sum + d
    if(compare(A,B) == false) {
        res = add(B,A);
        return res;
    }
    //相加
    int t = 0;
    for(int i = 0;i < A.size();i++) {
        t +=A[i];
        if(i < B.size()) {
            t +=B[i];
        }
        C.push_back(t%10);
        t = t/10;
    }
    if(t != 0) {
        C.push_back(t);
    }
    return C;
}
int main()
{
    while(true) {
        cin>>s;
        //退出循环
        if(s == "0") {
            break;
        }
        d.clear();
        C.clear();
        //转换
        for(int i = s.size() - 1;i>=0;i--) {
            //转为数字
            d.push_back(s[i]-'0');
        }
        if(res.size() == 0) {
            res = d;
        }
        else {
            //相加
            res = add(res,d);
        }
    }
    reverse(res.begin(),res.end());
    bool flag = true;
    //输出结果
    for(int i = 0;i<res.size();i++) {
        if(res[i] == 0 && flag)
        {
            continue;
        }
        flag = false;
        printf("%d",res[i]);
    }
    return 0;
}