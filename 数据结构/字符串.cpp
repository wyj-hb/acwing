#include <bits/stdc++.h>
using namespace std;
//aabbcddddefggbbaa
//cef
const int N = 2e5 + 10;
char d[N];
int tt = -1;
char ss[N];
void push(char c) {
    d[++tt] = c;
}
char tp() {
    return d[tt];
}
void pop() {
    //不空才能出栈
    if(tt != -1) {
        tt--;
    }
}
int main()
{
    scanf("%s",ss);
    int cnt = 0;
    char c = ss[cnt];
    while(c) {
        if(tt == -1) {
            push(c);
            c = ss[++cnt];
        }
        else {
            char top = tp();
            if(top == c) {
                c = ss[++cnt];
                //这个要么是回车要么不相等
                pop();
            }
            else {
                //push
                push(c);
                c = ss[++cnt];
            }
        }

    }
    for(int i = 0;i<=tt;i++) {
        printf("%c",d[i]);
    }
    return 0;
}