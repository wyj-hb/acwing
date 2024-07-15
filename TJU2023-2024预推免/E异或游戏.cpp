//#include<bits/stdc++.h>
//using namespace std;
///*
//	2
//	2
//	1 2
//	3
//	1 2 3
//*/
///*
//	3
//	6
//*/
//const int N = 1000001;
//int t;
//int f[N];
//int main()
//{
//	cin >> t;
//	int num;
//	while (t--)
//	{
//		cin >> num;
//		for (int i = 1; i <= num; i++)
//		{
//			cin >> f[i];
//		}
//		int res = 0;
//		for (int i = 1; i <= num; i++)
//		{
//			for (int j = i+1; j <= num; j++)
//			{
//				int cnt = 0;
//				int c1 = f[i];
//				int c2 = f[j];
//				while (c1 && c2)
//				{
//					int x1 = (c1 >> cnt) & (1);
//					int x2 = (c2 >> cnt) & (1);
//					if (x1 != x2)
//					{
//						res += pow(2, cnt);
//					}
//					c1 = c1 >> cnt;
//					c2 = c2 >> cnt;
//					cnt++;
//				}
//				
//			}
//		}
//		cout << res << endl;
//	}
//}