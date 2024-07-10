//#include<iostream>
//#include<queue>
//using namespace std;
/*
	3 3
	1 2 -1
	2 3 4
	3 1 -4	
*/
/*
	Yes
*/
//const int N = 2001;
//int n, m;
//int e[N], h[N], ne[N],w[N],cnt[N],st[N],dist[N];
//int idx = 1;
////有负权回路代表到不了终点
//void add(int a, int b, int c)
//{
//	e[idx] = b; ne[idx] = h[a]; w[idx] = c; h[a] = idx++;
//}
//void spfa()
//{
//	memset(dist, 0x3f, sizeof dist);
//	queue<int> q;
//	for (int i = 1; i <= n; i++)
//	{
//		q.push(i);
//		st[i] = 1;//为1代表在队列中
//	}
//	dist[1] = 0;
//	while (q.size())
//	{
//		int data = q.front();
//		q.pop();
//		st[data] = 0;
//		//遍历所有的边,如果出现变小的则更新,判断走过的边数,如果大于等于n代表存在负回路
//		for (int i = h[data]; i != 0; i = ne[i])
//		{
//			int dd = e[i];
//			if (dist[dd] > dist[data] + w[i])
//			{
//				//更新
//				dist[dd] = dist[data] + w[i];
//				cnt[dd] = cnt[data] + 1;
//				if (cnt[dd] >= n)
//				{
//					cout << "Yes"; return;
//				}
//				if (!st[dd])
//				{
//					q.push(dd);
//					st[dd] = 1;
//				}
//			}
//		}
//	}
//	cout << "No" << endl;
//	return;
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