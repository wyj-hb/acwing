//#include<iostream>
//using namespace std;
///*
//	��������
//	4 5
//	1 2
//	2 4
//	3 4
//	4 5
//	���������
//	8
//*/
//const int N = 1001;
//int n, v;
//int NN[N], VV[N];
//int res[N];
//int main()
//{
//	cin >> n >> v;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> NN[i] >> VV[i];
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		//���α���ÿһ���ڵ�,�Ƿ����
//		for (int j = v; j >= NN[i]; j--)
//		{
//			res[j] = max(res[j], res[j - NN[i]] + VV[i]);
//		}
//	}
//	cout << res[v];
//}