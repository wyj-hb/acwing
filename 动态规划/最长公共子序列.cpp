//#include<iostream>
//using namespace std;
///*
//4 5
//acbd
//abedc
//*/
//
///*
//3
//*/
//
//const int N = 1010;
//int n, m;
//char s1[N]; char s2[N];
//int res[N][N];
//int main()
//{
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> s1[i];
//	}
//	for (int i = 1; i <= m; i++)
//	{
//		cin >> s2[i];
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= m; j++)
//		{
//			res[i][j] = max(res[i - 1][j], res[i][j - 1]);
//			if (s1[i] == s2[j])
//			{
//				res[i][j] = max(res[i - 1][j - 1] + 1, res[i][j]);
//			}
//		}
//	}
//	cout << res[n][m];
//}