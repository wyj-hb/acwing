#include<iostream>
#include<vector>
using namespace std;
/*
		3 3
		1 2
		2 3
		1 3
*/

/*
	   1 2 3
*/
//const int N = 100010;
////邻接链表
//int e[N], ne[N]; int h[N];
//int idx = 1;
//int n, m;
////计算入度
//int in_degree[N];
////bfs
//int queue[N];
////路径
//vector<int> path;
//void add(int a, int b)
//{
//	e[idx] = b; ne[idx] = h[a]; h[a] = idx++;
//}
//bool solve()
//{
//	int tt = 1, hh = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		if (in_degree[i] == 0)
//		{
//			//入队
//			queue[tt++] = i;
//			//存储路径
//			path.push_back(i);
//		}
//	}
//	while (hh < tt)
//	{
//		//出队
//		int d = queue[++hh];
//		for (int i = h[d]; i != 0; i = ne[i])
//		{
//			int v = e[i];
//			//遍历
//			if (--in_degree[v] == 0)
//			{
//				//入队
//				queue[tt++] = v;
//				path.push_back(v);
//			}
//		}
//	}
//	//hh==n+1代表所有的节点都进去过了
//	return hh == n+1;
//}
//int main()
//{
//	cin >> n >> m;
//	int a, b;
//	for (int i = 0; i < m; i++)
//	{
//		cin >> a >> b;
//		add(a, b);
//		in_degree[b] += 1;
//	}
//	bool dd = solve();
//	if (dd)
//	{
//		for (auto c : path)
//		{
//			cout << c << " ";
//		}
//	}
//	else
//	{
//		cout << "-1" << endl;
//	}
//}