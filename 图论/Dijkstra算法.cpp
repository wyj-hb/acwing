//#include<iostream>
//using namespace std;
/*
	3 3
	1 2 2
	2 3 1
	1 3 4
*/

/*
	3
*/
//const int N = 501;
//int n, m;
////距离
//int dis[N][N];
////划分集合
//bool s[N];
//int min_dis[N];
//void dijkstra()
//{
//	//最初在集合中的只有第一个节点
//	min_dis[1] = 0;
//	//找到目标节点
//	for (int i = 1; i < n; i++)
//	{
//		int t = -1;
//		//第一次要从第一个节点开始
//		for (int j = 1; j <= n; j++)
//		{
//			//遍历所有在集合中的点
//			if (!s[j] && ( t==-1 ||min_dis[j] < min_dis[t]))
//			{
//				//更新最小边
//				t = j;
//			}
//		}
//		//加入到集合中
//		s[t] = 1;
//		//从t这个点去更新
//		for (int j = 2; j <= n; j++)
//		{
//			min_dis[j] = min(min_dis[j], min_dis[t] + dis[t][j]);
//		}
//	}
//	if (min_dis[n] == 0x3f3f3f3f)
//	{
//		cout << "-1" << endl;
//	}
//	else
//	{
//		cout << min_dis[n];
//	}
//}
//int main()
//{
//	cin >> n >> m;
//	int a, b, c;
//	memset(min_dis, 0x3f, sizeof min_dis);
//	memset(dis,0x3f,sizeof dis);
//	for (int i = 0; i < m; i++)
//	{
//		cin >> a >> b >> c;
//		//有重复边取最小的
//		dis[a][b] = min(dis[a][b], c);
//	}
//	dijkstra();
//}