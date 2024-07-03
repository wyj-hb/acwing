//#include<iostream>
//using namespace std;
//const int N = 100;
//int mx[N][N], se[N][N];
//int main()
//{
//	int x, y;
//	cin >> x >> y;
//	for (int i = 1; i <= x; i++)
//	{
//		for (int j = 1; j <= y; j++)
//		{
//			scanf_s("%d", &mx[i][j]);
//			se[i][j] = se[i - 1][j] + se[i][j - 1] - se[i - 1][j - 1] + mx[i][j];
//		}
//	}
//	//求(k,h)和(i,j)所围成的面积
//	int i, j, k, h;
//	cin >> i >> j >> k >> h;
//	int a1 = k - i;
//	int a2 = h - j;
//	cout << se[k][h] - se[k][j-1] - se[i-1][h] + se[i-1][j-1];
//}