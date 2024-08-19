#include <bits/stdc++.h>
using namespace std;
/*
*   6
    3 1 6 5 2 3
 */
/*
 *  10
 */
int n;
const int N = 40010;
int d[N];
int main()
{
    scanf("%d",&n);
    int mx = 0;
    for(int i = 1;i<=n;i++) {
        scanf("%d",&d[i]);
        mx = mx > d[i] ? mx : d[i];
    }
    //枚举长度
    int max = 0;
    int cnt = 0;
    for(int i = 1;i<=mx;i++) {
        for(int j = 1;j<=n;j++) {
            //i代表枚举的长度
            if(d[j] >= i) {
                cnt++;
            }
            else{
                max = max > cnt * i ? max : cnt * i;
                cnt = 0;
            }
            if(j == n) {
                max = max > cnt * i ? max : cnt * i;
                cnt = 0;
            }
        }
    }
    printf("%d",max);
    return 0;
}