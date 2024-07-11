//#include<iostream>
//using namespace std;
///*
//	4 5
//	1 2 1
//	1 3 2
//	1 4 3
//	2 3 2
//	3 4 4
//*/
///*
//	6
//*/
//#define DATA_MAX 0x3f3f3f3f
//const int N = 500;
//int dist[N],st[N],grid[N][N];
//int n, m;
//void prim()
//{
//	int res = 0;
//	memset(dist, 0x3f, sizeof dist);
//	dist[1] = 0;
//	for (int i = 1;i<=n;i++)
//	{
//		//找到当前最小的点
//		int t = -1;
//		for (int j = 1; j <= n; j++)
//		{
//			if ( !st[j] &&(t == -1|| dist[j] < dist[t]))
//			{
//				//更新
//				t = j;
//			}
//		}
//		if (dist[t] == DATA_MAX)
//		{
//			cout << "impossible" << endl; return;
//		}
//		res += dist[t];
//		//根据找到的点更新所有的与他相连的点
//		for (int k = 1; k <= n; k++)
//		{
//			if (st[k] == 0)
//			{
//				dist[k] = min(dist[k],grid[k][t]);
//			}
//		}
//		//加入集合
//		st[t] = 1;
//	}
//	cout << res << endl;
//	return;
//}
//int main()
//{
//	cin >> n >> m;
//	int a, b, c;
//	memset(grid, 0x3f, sizeof grid);
//	for (int i = 0; i < m; i++)
//	{
//		cin >> a >> b >> c;
//		grid[a][b] = min(grid[a][b], c);
//		grid[b][a] = min(grid[b][a], c);
//	}
//
//	prim();
//}