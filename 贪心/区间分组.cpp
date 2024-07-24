// #include <bits/stdc++.h>
// using namespace std;
// /*
// *      3
//         -1 1
//         2 4
//         3 5
//  */
//
// /*
//  *     2
//  */
// const int N = 100010;
// int n;
// //用一个小根堆
// struct node {
//     int l,r;
//     const bool operator<(const node& d) const {
//         return l<d.l;
//     }
// }d[N];
// int main()
// {
//     scanf("%d",&n);
//     int l,r;
//     for(int i = 1;i<=n;i++) {
//         scanf("%d%d",&l,&r);
//         d[i] = {l,r};
//     }
//     sort(d+1,d+1+n);
//     priority_queue<int,vector<int>,greater<int>> q;
//     //最后输出的是p.size()
//     for(int i = 1;i<=n;i++)
//     {
//         if(q.empty() || d[i].l <= q.top())
//         {
//             //自己单开一个区间
//             q.push(d[i].r);
//         }
//         else
//         {
//             //在区间内
//             q.pop();
//             q.push(d[i].r);
//         }
//     }
//     printf("%d",q.size());
//     return 0;
// }