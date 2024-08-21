#include <bits/stdc++.h>
using namespace std;
//38 2 4
//50
int x,i,j;
int get(int d,int idx) {
    return (d>> idx) & 1;
}
void solve() {
    int x1 = get(x,i);
    int x2 = get(x,j);
    //x的第i位变为x2,第j位变为x1
    if(x1 != x2) {
        //取反
        x = x ^ (1 << i);
        x = x ^ (1 << j);
    }

}
int main()
{
    scanf("%d%d%d",&x,&i,&j);
    solve();
    printf("%d",x);
    return 0;
}