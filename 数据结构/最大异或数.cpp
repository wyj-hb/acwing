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
//// son�����洢ÿ���ڵ�洢���������,idx��ʾ��ǰʹ�õ��Ľڵ�����,cnt��¼ÿ���ڵ�ʹ�õĴ���
//int son[N][2], idx, a[N];
//void insert(int num)
//{
//	//��������
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
//			//���ڶ�Ӧ�ĵ�
//			res = res * 2 + !data;
//			//��ԭ����
//			p = son[p][!data];
//		}
//		else
//		{
//			//�����ڶ�Ӧ�ĵ�
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