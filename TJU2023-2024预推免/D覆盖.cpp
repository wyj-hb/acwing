//#include<bits/stdc++.h>
//using namespace std;
///*
//2
//3 2
//1 2
//1 1895
//2 129
//4 1
//1 1 1
//3 1
//*/
//
///*
//1895 129 129
//0 0 1 0
//*/
//int t,fa[21],da[21];
//int find(int data)
//{
//	if (fa[data] != data)
//	{
//		fa[data] = find(fa[data]);
//	}
//	return fa[data];
//}
//int main()
//{
//	cin >> t;
//	int a, b;
//	while (t--)
//	{
//		//节点个数与指令条数
//		cin >> a >> b;
//		memset(da, 0, sizeof da);
//		int data;
//		for (int i = 1; i <= a - 1; i++)
//		{
//			fa[i] = i;
//			cin >> data;
//			fa[i + 1] = data;
//		}
//		int data2;
//		for (int i = 1; i <= b; i++)
//		{
//			cin >> data>>data2;
//			da[data] = data2;
//		}
//		for (int i = 1; i <= a; i++)
//		{
//			int f = find(fa[i]);
//			cout << da[f] << " ";
//		}
//		cout << endl;
//	}
//}