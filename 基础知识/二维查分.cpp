//#include<iostream>
//using namespace std;
//const int N = 100;
//int a[N][N], b[N][N];
////在x1,y1,x2,y2之间的所有数据加上c
//void insert(int x1,int y1,int x2,int y2,int c)
//{
//	b[x1][y1] += c;
//	b[x2 + 1][y1] -= c;
//	b[x1][y2 + 1] -= c;
//	b[x2 + 1][y2 + 1] += c;
//}
//int main()
//{
//	//n 行 m 列 q次
//	int n, m, q;
//	cin >> n >> m >> q;
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= m; j++)
//		{
//			cin >> a[i][j];
//			insert(i, j, i, j, a[i][j]);
//		}
//	}
//	while (q--)
//	{
//		int x1, y1, x2, y2,c;
//		cin >> x1 >> y1 >> x2 >> y2 >> c;
//		insert(x1, y1, x2, y2, c);
//	}
//	//矩阵还原
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= m; j++)
//		{
//			a[i][j] = a[i - 1][j] + a[i][j - 1] - a[i - 1][j - 1] + b[i][j];
//			cout << a[i][j] << " ";
//		}
//		cout << endl;
//	}
//}