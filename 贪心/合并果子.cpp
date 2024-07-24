// #include <bits/stdc++.h>
// using namespace std;
// /*
// *   3
//     1 2 9
//  */
// /*
//  *  15
//  */
// int n;
// const int N = 100010;
// int d[N];
// int main()
// {
//     scanf("%d",&n);
//     priority_queue<int,vector<int>,greater<int>> q;
//     for(int i = 1;i<=n;i++) {
//         scanf("%d",&d[i]);
//         q.push(d[i]);
//     }
//     int sum = 0;
//     while(q.size() >1)
//     {
//         int a = q.top();q.pop();
//         int b = q.top();q.pop();
//         sum += a+b;
//         q.push(a+b);
//     }
//     printf("%d",sum);
//     return 0;
// }