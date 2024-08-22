#include <bits/stdc++.h>
using namespace std;
/*
    00100 8 3
    71120 7 88666
    00000 4 99999
    00100 1 12309
    68237 6 71120
    33218 3 00000
    99999 5 68237
    88666 8 -1
    12309 2 33218
 */
/*
    71120 7 88666
    88666 8 00000
    00000 4 99999
    99999 5 68237
    68237 6 00100
    00100 1 12309
    12309 2 33218
    33218 3 -1
 */
const int N = 1e5 + 10;
int a1,n,K;
int e[N];
int ne[N];
void insert(int address,int c,int next) {
    ne[address] = next;
    e[address] = c;
}
int main()
{
    scanf("%d%d%d",&a1,&n,&K);
    int address,next;
    int c;
    for(int i = 1;i<=n;i++)
    {
        scanf("%d %d %d",&address,&c,&next);
        insert(address,c,next);
    }
    int now = a1;
    int cnt = 0;
    int front = -1;
    int back = a1;
    while(now !=-1) {
        if(cnt == K-1 || ne[now] == -1) {
            //记录下一个位置
            next = ne[now];
            //更新位置
            ne[now] = front;
            front = back;
            back = next;
            now = next;
            //cnt清0
            cnt = 0;
        }
        else {
            now = ne[now];
            cnt++;
        }
    }
    now = front;
    while(now != -1) {
        printf("%05d %d",now,e[now]);
        if(ne[now] != -1) {
            printf(" %05d\n",ne[now]);
        }
        else {
            printf(" -1\n");
        }
        now = ne[now];
    }
    return 0;
}