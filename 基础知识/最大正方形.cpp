#include <bits/stdc++.h>
using namespace std;
/*
*   4 4
    0 1 1 1
    1 1 1 0
    0 1 1 0
    1 1 0 1
 */
/*
 *  2
 */
int n,m;
const int N = 101;
int me[N][N];
int se[N][N];
int main()
{
    scanf("%d%d",&n,&m);
    for(int i = 1;i<=n;i++) {
        for(int j = 1;j<=m;j++) {
            scanf("%d",&me[i][j]);
            se[i][j] = se[i-1][j] + se[i][j-1] - se[i-1][j-1] + me[i][j];
        }
    }
    int d = n < m ? n : m;
    int max = 0;
    for(int i = 1;i<=d;i++) {
        bool flag = true;
        //第一轮枚举所有可能的正方形边长
        for(int u = i;u <= n;u++) {
            for(int v = i;v<=m;v++) {
                if(se[u][v]- se[u-i][v] - se[u][v-i] + se[u-i][v-i] == pow(i,2)) {
                    max = i;
                    flag = false;
                    break;
                }
            }
            if(flag == false) {
                break;
            }
        }
        //没有小的一定没有大的
        if(flag == true) {
            break;
        }
    }
    printf("%d",max);
    return 0;
}