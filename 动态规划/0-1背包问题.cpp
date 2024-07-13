//#include<iostream>
//using namespace std;
///*
//	输入样例
//	4 5
//	1 2
//	2 4
//	3 4
//	4 5
//	输出样例：
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
//		//依次遍历每一个节点,是否包含
//		for (int j = v; j >= NN[i]; j--)
//		{
//			res[j] = max(res[j], res[j - NN[i]] + VV[i]);
//		}
//	}
//	cout << res[v];
//}