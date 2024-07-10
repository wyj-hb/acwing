//#include<iostream>
//using namespace std;
//
///*
//	3 3 1
//	1 2 1
//	2 3 1
//	1 3 3	
//*/
//
///*
//	3
//*/
//const int N = 501,M = 100001;
//int n, m, k;
//struct edge
//{
//	int a, b, c;
//}edges[M];
////记录距离
//int dist[N],backup[N];
//void Bellman()
//{
//	memset(dist, 0x3f, sizeof dist);
//	dist[1] = 0;
//	for (int i = 1; i <= k; i++)
//	{
//		memcpy(backup, dist, sizeof dist);
//		for (int j = 1; j <= m; j++)
//		{
//			//遍历所有的边进行更新,需要知道是左右两个顶点以及权值
//			int a = edges[j].a; int b = edges[j].b; int c = edges[j].c;
//			dist[b] = min( dist[b], backup[a] + c);
//		}
//	}
//	//可能存在负权的边来更新最小值
//	if (dist[n] > 0x3f3f3f3f / 2)
//	{
//		cout << -1 << endl;
//	}
//	else
//	{
//		cout << dist[n];
//	}
//}
//int main()
//{
//	cin >> n >> m >> k;
//	int a, b, c;
//	for(int i = 1;i<=m;i++)
//	{
//		cin >> a >> b >> c;
//		//不需要考虑重边,重边一样更新
//		edges[i] = { a,b,c };
//	}
//	Bellman();
//}