#include <bits/stdc++.h>
using namespace std;
const int N = 1000010;
/*
 *  1000001100011010111101111001101101010111001110111110000011011010001000100111101000000000101110101110
 *
 */
int d1[N],d2[N];
unordered_map<int,int> m;
int main()
{
    string s;
    cin>>s;
    int max = 0;
    for(int i = 0;i<s.size();i++) {
        int d = s[i] - '0';
        //记录1的个数
        d1[i+1] = d1[i];
        //记录0的个数
        d2[i+1] = d2[i];
        if(d == 1)
        {
            d1[i+1]++;
        }
        else
        {
            d2[i+1]++;
        }
    }
    int res = 0;
    m[0] = 0;
    for(int i = 1;i<=s.size();i++)
    {
        int c = d1[i] - d2[i];
        if(m.count(c))
        {

            res = res > i - m[c] ? res : i - m[c];
            // printf("%d %d %d %d\n",i,d1[i],d2[i],res);
        }
        else
        {

            m[c] = i;//记录下标
            // printf("m : %d,c : %d\n",m[c],c);
        }
    }
    printf("%d",res);
    return 0;
}