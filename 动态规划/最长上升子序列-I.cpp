//#include<iostream>
//using namespace std;
///*
//7
//3 1 2 1 8 5 6
//*/
///*
//4
//*/
//const int N = 1010;
//int n;
//int inf = 0x3f3f3f3f;
//int res[N];
//int d[N];
//int main()
//{
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> d[i];
//		//默认最小为1
//		res[i] = 1;
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			if (d[i] > d[j])
//			{
//				res[i] = max(res[i], res[j] + 1);
//			}
//		}
//	}
//	int m = -inf;
//	for (int i = 1; i <= n; i++)
//	{
//		m = max(res[i], m);
//	}
//	cout << m;
//}