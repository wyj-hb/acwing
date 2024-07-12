#include<iostream>
#include<algorithm>
using namespace std;
/*
	4 5
	1 2 1
	1 3 2
	1 4 3
	2 3 2
	3 4 4
*/

/*
	6
*/
//const int N = 200010;
//int n, m,fa[N],st[N];
////稀疏图,不可以使用邻接矩阵
//struct node {
//	int a, b, c;
//	bool const operator<(const node& t) {
//		return c < t.c;
//	}
//}nodes[N];
////查找数据的祖先节点
//int find(int data)
//{
//	if (fa[data] != data)
//	{
//		fa[data] = find(fa[data]);
//	}
//	return fa[data];
//}
//void kruskal()
//{
//	//按照边的大小进行排序
//	sort(nodes, nodes + m);
//	//选择的边的个数为n-1
//	int res = 0;
//	int cnt = 0;
//	for (int i = 0; i < m; i++)
//	{
//		auto data = nodes[i];
//		int a = data.a; int b = data.b; int c = data.c;
//		if (find(a) != find(b))
//		{
//			res += c; fa[b] = fa[a]; cnt++;
//		}
//	}
//	if (cnt == n)
//	{
//		cout << "impossible" << endl;
//	}
//	else
//	{
//		cout << res << endl;
//	}
//	return;
//}
//int main()
//{
//	cin >> n >> m;
//	int a, b, c;
//	for (int i = 0; i < m; i++)
//	{
//		cin >> a >> b >> c;
//		nodes[i] = { a,b,c };
//		fa[i] = i;
//	}
//	kruskal();
//}