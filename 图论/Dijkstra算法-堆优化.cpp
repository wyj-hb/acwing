//#include<iostream>
//#include<queue>
//using namespace std;
////使用堆来优化dijkstra算法,当顶点数很多时,朴素方法复杂度过高,所以使用堆进行优化
///*
//	3 3
//	1 2 2
//	2 3 1
//	1 3 4
//*/
//
///*
//	3
//*/
//const int N = 100010;
//typedef pair<int,int> PIL;
//int n, m;
////记录这个节点是否被访问过
//bool st[N];
////老套路
//int e[N], ne[N],h[N],w[N],dist[N];
//int idx = 1;
//void add(int a, int b, int c)
//{
//	e[idx] = b; w[idx] = c; ne[idx] = h[a]; h[a] = idx++;
//}
////最短路径有重复边和环没问题
//int dijkstra()
//{
//	//构造优先队列
//	priority_queue<PIL, vector<PIL>, greater<PIL>> p;
//	dist[1] = 0;
//	//第一个位置为distance,第二个位置为编号
//	p.push({ 0,1 });
//	while (p.size())
//	{
//		auto data = p.top();
//		p.pop();
//		//循环条件:队列不为空
//		int dis = data.first;
//		int idx = data.second;
//		if (st[idx]) continue;
//		st[idx] = 1;
//		for (int i = h[idx]; i != 0; i = ne[i])
//		{
//			//i是idx,不是真实的下标,dd是真实的下标
//			int dd = e[i];//取出对应的节点下标
//			if (dist[dd] > w[i] + dis)//idx唯一对应一条边,因此i也可以唯一对应一条边
//			{
//				dist[dd] = w[i] + dis;
//				//更新
//				p.push({ w[i] + dis, dd });
//			}
//		}
//	}
//	if (dist[n] == 0x3f3f3f3f)
//	{
//		return -1;
//	}
//	else
//	{
//		return dist[n];
//	}
//}
//int main()
//{
//	cin >> n >> m;
//	int a, b, c;
//	memset(dist, 0x3f, sizeof dist);
//	while (m--)
//	{
//		cin >> a >> b >> c;
//		//去除重复边
//		add(a, b, c);
//	}
//    a = dijkstra();
//	cout << a << endl;
//}