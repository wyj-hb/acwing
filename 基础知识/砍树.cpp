#include <bits/stdc++.h>
using namespace std;
/*
    4 21
    20 20 20 17
 */
/*
 *  15
 */
typedef long long LL;
LL N,M;
const int NN = 1000010;
int d[NN];
LL a[NN];
bool mycompare(int d1,int d2) {
    return d1 > d2;
}
int lower_find(LL d,int l,int r) {
    while(l < r) {
        int mid = l + r >> 1;
        if(a[mid] >= d) {
            r = mid;
        }
        else {
            l = mid+1;
        }
    }
    return l;
}

int main()
{
    scanf("%lld%lld",&N,&M);
    int max = 0;
    for(int i = 1;i<=N;i++) {
        scanf("%d",&d[i]);
        max = max > d[i] ? max : d[i];
    }
    sort(d+1,d+1+N,mycompare);
    int n = 1;
    int cnt = 1;
    for(int j = max;j>=0;j--) {
        if(d[n] > j) {
            while(d[n] == d[n+1]) {
                n++;
            }
            //算他一股
            a[cnt] = a[cnt-1] + n;
            cnt++;
            n++;
        }
        else {
            a[cnt] = a[cnt-1] + n - 1;
            cnt++;
        }
    }
    //查找
    int l = lower_find(M,0,max+1);
    printf("%d",max - l + 1);
    return 0;
}