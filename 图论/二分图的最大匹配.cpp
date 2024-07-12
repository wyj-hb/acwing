//#include<iostream>
//using namespace std;
///*
//	2 2 4
//	1 1
//	1 2
//	2 1
//	2 2
//*/
///*
//	2
//*/
//const int N = 501;
//int n1, n2,m;
////match记录每个节点的匹配情况,st记录每个节点的使用情况
//int e[N], ne[N], h[N],match[N],st[N];
//int idx = 1;
//int cnt = 0;
//void add(int a, int b)
//{
//	e[b] = idx; ne[b] = h[a]; h[a] = idx++;
//}
//int dfs(int data)
//{
//	for (int i = h[data]; i != 0; i = ne[i])
//	{
//		int dd = e[data];
//		if (!st[dd])
//		{
//			st[dd] = 1;
//			if (match[dd] == 0 || dfs(match[dd]))
//			{
//				//没有被赋值过或者可以找到
//				match[dd] = data;
//				return 1;
//			}
//		}
//	}
//	return 0;
//}
//int main()
//{
//	cin >> n1 >> n2 >> m;
//	int a, b;
//	for (int i = 0; i < m; i++)
//	{
//		cin >> a >> b;
//		add(a, b); add(b, a);
//	}
//	for (int i = 1; i <= n1; i++)
//	{
//		memset(st, 0, sizeof st);
//		st[i] = 1;
//		if (dfs(i))
//		{
//			cnt++;
//		}
//	}
//	cout << cnt << endl;
//}