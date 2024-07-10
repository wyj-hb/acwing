//#include<iostream>
//#include<queue>
//using namespace std;
///*
//	3 3
//	1 2 5
//	2 3 -3
//	1 3 4
//*/
//
///*
//	2
//*/
//const int N = 100010;
//int n, m;
//int e[N], ne[N], h[N], w[N];
//int idx = 1;
//int dist[N],backup[N],st[N];
//void add(int a, int b, int c)
//{
//	e[idx] = b; ne[idx] = h[a]; w[idx] = c; h[a] = idx++;
//}
//void spfa()
//{
//	queue<int> q;
//	q.push(1);
//	memset(dist, 0x3f, sizeof dist);
//	memset(st, 1, sizeof st);
//	dist[1] = 0;
//	while (q.size())
//	{
//		int data = q.front();
//		st[data] = 0;
//		q.pop();
//		for (int i = h[data]; i != 0; i = ne[i])
//		{
//			//如果变小了则入队
//			int dd = e[i];//取出节点
//			if (dist[dd] > dist[data] + w[i])
//			{
//				dist[dd] = dist[data] + w[i];
//				if (st[dd])
//				{
//					q.push(dd);
//					st[dd] = 0;
//				}
//			}
//		}
//	}
//	if (dist[n] == 0x3f3f3f3f)
//	{
//		cout << "impossible";
//	}
//	else
//	{
//		cout << dist[n];
//	}
//}
//int main()
//{
//	cin >> n >> m;
//	int a, b, c;
//	for (int i = 0; i < m; i++)
//	{
//		cin >> a >> b >> c;
//		add(a, b, c);
//	}
//	spfa();
//}