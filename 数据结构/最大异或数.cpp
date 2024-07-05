//#include<iostream>
//using namespace std;
///*
//*	3
//	1 2 3
//*/
///*
//*	3
//*/
//const int N = 100001;
//// son用来存储每个节点存储的数据情况,idx表示当前使用到的节点索引,cnt记录每个节点使用的次数
//int son[N][2], idx, a[N];
//void insert(int num)
//{
//	//插入数据
//	int p = 0;
//	for (int i = 30; i >= 0; i--)
//	{
//		int data = (num >> i) & 1;
//		if (!son[p][data]) son[p][data] = ++idx;
//		p = son[p][data];
//	}
//}
//int query(int num)
//{
//	int p = 0;
//	int res = 0;
//	for (int i = 30; i >= 0; i--)
//	{
//		int data = (num >> i) & 1;
//		if (son[p][!data]) 
//		{
//			//存在对应的点
//			res = res * 2 + !data;
//			//还原数据
//			p = son[p][!data];
//		}
//		else
//		{
//			//不存在对应的点
//			p = son[p][data];
//			res = res * 2 + data;
//		}
//	}
//	return res;
//}
//int main()
//{
//	int n;
//	cin >> n;
//	int num;
//	for(int i = 0;i<n;i++)
//	{
//		cin >> a[i];
//		insert(a[i]);
//	}
//	int res = 0;
//	for (int i = 0; i < n; i++)
//	{
//		int data = query(a[i]);
//		res = max(res, data^a[i]);
//	}
//	cout << res;
//}