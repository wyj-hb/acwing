//#include<iostream>
//using namespace std;
///*
//	4
//    1 3 5 2
//*/
///*
//	22
//*/
//const int N = 310;
//int n;
//int s[N],d[N];
//int f[N][N];
//int main()
//{
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> s[i];
//		d[i] = s[i] + d[i - 1];
//	}
//	memset(f, 0x3f, sizeof f);
//	for (int i = 1; i <= n; i++) f[i][i] = 0;
//	//按照最后一次的合并划分进行遍历
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j + i - 1 <= n; j++)
//		{
//			int r = j + i - 1; int l = j;
//			for (int k = l; k < r; k++)
//			{
//				f[l][r] = min(f[l][r], f[l][k] + f[k + 1][r] + d[r] - d[l - 1]);
//			}
//		}
//	}
//	cout << f[1][n];
//}