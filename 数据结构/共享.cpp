#include <bits/stdc++.h>
using namespace std;

/*
    11111 22222 9
    67890 i 00002
    00010 a 12345
    00003 g -1
    12345 D 67890
    00002 n 00003
    22222 B 23456
    11111 L 00001
    23456 e 67890
    00001 o 00010
 */
/*
    67890
 */
const int N = 1e5 + 10;
int a1,n,a2;
int ne[N],head;
char e[N];
void insert(int address,char c,int next) {
    ne[address] = next;
    e[address] = c;
}
int se[N];
int main()
{
    scanf("%d%d%d",&a1,&a2,&n);
    int address,next;
    char c;
    while(n -- ) {
        scanf("%d %c %d",&address,&c,&next);
        insert(address,c,next);
    }
    //遍历
    int now = a1;
    while(now != -1) {
        e[now] = 1;
        now = ne[now];
    }
    now = a2;
    bool flag = false;
    while(now != -1) {
        if(e[now] == 1) {
            flag = true;
            printf("%05d",now);
            break;
        }
        now = ne[now];
    }
    if(!flag) {
        printf("-1");
    }
    return 0;
}