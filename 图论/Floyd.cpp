//#include<iostream>
//using namespace std;
///*
//	3 3 2
//	1 2 1
//	2 3 2
//	1 3 1
//	2 1
//	1 3
//*/
///*
//	impossible
//	1
//*/
//#define MAX_INF 0x3f3f3f3f
//const int N = 201;
//int n, m,k;
//int dist[N][N];
//void floyd()
//{
//	for (int i = 1; i <= n; i++)
//	{
//		//逐步加入每一个点
//		for (int j = 1; j <= n; j++)
//		{
//			for (int k = 1; k <= n; k++)
//			{
//				if (dist[j][k] > dist[j][i] + dist[i][k])
//				{
//					dist[j][k] = dist[j][i] + dist[i][k];
//				}
//			}
//		}
//	}
//}
//int main()
//{
//	cin >> n >> m>>k;
//	int a, b, c;
//	memset(dist, 0x3f, sizeof dist);
//	for (int i = 0; i < m; i++)
//	{
//		cin >> a >> b >> c;
//		dist[a][b] = min(dist[a][b], c);
//	}
//	floyd();
//	while (k--)
//	{
//		cin >> a >> b;
//		if (dist[a][b] == MAX_INF)
//		{
//			cout << "impossible"<<endl;
//		}
//		else
//		{
//			cout << dist[a][b];
//		}
//	}
//}