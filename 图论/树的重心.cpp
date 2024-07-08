#include<iostream>
using namespace std;
/*
	9
	1 2
	1 7
	1 4
	2 8
	2 5
	4 3
	3 9
	4 6
*/
/*
	4
*/
//const int N = 100010;
////使用邻接链表的方法表示图
//int e[N], ne[N];
//int idx = 1;
////h[N]存储根节点
//int h[N];
//int ans = N;
//bool pd[N];
//int n;
////在a作为头结点的链表上插入以b为值的节点
//void add(int a, int b)
//{
//	e[idx] = b; ne[idx] = h[a]; h[a] = idx++;
//}
//int dfs(int nn)
//{
//	//找到以该点为重心,删除后各个连通块中点的最大值最小的那个点
//	int res = 0; int sum = 1;
//	pd[nn] = 1;
//	//深搜,递归
//	for (int i = h[nn]; i != -1; i = ne[i])
//	{
//		int j = e[i];
//		if (!pd[j])
//		{
//			//未被访问过
//			int s1 = dfs(j);
//			res = max(s1, res);
//			sum += s1;
//		}
//	}
//	res = max(res, n - sum);
//	ans = min(res, ans);
//	return sum;
//}
//int main()
//{
//	cin >> n;
//	//构造图
//	int a, b;
//	memset(ne, -1,sizeof ne);
//	for(int i = 0;i<n-1;i++)
//	{
//		cin >> a >> b;
//		add(a, b);
//	}
//	dfs(1);
//	cout << ans << endl;
//}