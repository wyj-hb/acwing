//#include<iostream>
//using namespace std;
///*
//10
//AGTCTGACGC
//11
//AGTAAGTAGGC
//*/
///*
//4
//*/
//const int N = 1010;
//int n, m,inf = 0x3f3f3f3f;
//char s1[N], s2[N];
//int f[N][N];
//int main()
//{
//	cin >> n>>s1+1>>m>>s2+1;
//	for (int i = 0; i <= n; i++)
//	{
//		f[i][0] = i;
//	}
//	for (int i = 0; i <= m; i++)
//	{
//		f[0][i] = i;
//	}
//	for (int i = 1; i <= n; i++) 
//	{
//		for (int j = 1; j <=m; j++)
//		{
//			
//			f[i][j] = min(f[i - 1][j] + 1, f[i][j - 1] + 1);
//			int d = s1[i] == s2[j] ? 0 : 1;
//			f[i][j] = min(f[i][j], f[i - 1][j - 1] + d);
//		}
//	}
//	cout << f[n][m];
//}