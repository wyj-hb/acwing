#include <bits/stdc++.h>
using namespace std;
/*
*   5
    2 1 3 2 5
 */

/*
 *  3
 */
int n;
const int N = 100010;
int d[N];
int main()
{
    scanf("%d",&n);
    for(int i = 1;i<=n;i++) {
        scanf("%d",&d[i]);
    }
    int cnt = 0;
    //求最大赋值0
    int max = 0;
    int tmp = 0;
    for(int i = 1;i<=n;i++) {
        if(i+1 < n && d[i] <= d[i+1])
        {
            continue;
        }
        for(int j =1;j<=n;j++) {
            if(j == i)
            {
                continue;
            }
            else
            {
                if(d[j] > tmp) {
                    cnt++;
                    tmp = d[j];
                }
                else
                {
                    if(j != n)
                    {
                        max = max > cnt ? max : cnt;
                        cnt = 1; tmp = d[j];
                    }
                }
            }
        }
        max = max > cnt ? max : cnt;
        cnt = 0; tmp = 0;
    }
    printf("%d",max);
    return 0;
}