#include <bits/stdc++.h>
using namespace std;
/*
*   23
    535
    2624
    56275
    989835
 */
/*
*   10111
    1000010111
    101001000000
    1101101111010011
    11110001101010001011
 */
//不开LL 见祖宗
typedef long long LL;
LL d;
int cnt;
const int N = 70;
int v[N];
void solve() {
    //输出数据的二进制表示,其中不包含符号位
    cnt = 0;
    while(d >> cnt) {
        char c = (d >> cnt & 1) + '0';
        // printf("%c ",c);
        v[cnt++] = c;
    }
    for(int i = cnt-1;i>=0;i--) {
        printf("%c",v[i]);
    }
    printf("\n");
}
int main()
{
    while(scanf("%lld",&d) != EOF) {
        if(d == 0)
        {
            printf("%d\n",0);
        }
        else
        {
            solve();
        }
    }
    return 0;
}