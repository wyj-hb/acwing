//#include<bits/stdc++.h>
//#define rep(i,a,b) for(int i = a;i<=b;i++)
//#define INF 0x3f3f3f3f
//using namespace std;
////���ȫ1�Ӿ���
///*
//* 5 3
//* 1 0 1
//* 1 1 0
//* 0 1 1
//* 1 0 1
//* 1 1 1
//*/
//const int N = 100;
//int mat[N][N],s[N][N];
//int main()
//{
//	int m, n;
//	cin >> m >> n;
//	//���������ǰ׺�;���
//	rep(i, 1, m) rep(j, 1, n) cin >> mat[i][j];
//	//����ÿһ��λ��,�ҳ����ֵ
//	rep(j, 1, n) rep(i, 1, m) if (mat[i][j]) s[i][j] = s[i - 1][j] + mat[i][j]; else s[i][j] = 0;
//	int res = 0;
//	rep(i, 1, m) 
//	{
//		rep(j, 1, n) 
//		{
//			int mx = INF; 
//			rep(k, j, n) { mx = min(mx, s[i][k]); if (mx == 0) { break; } res = max(res, (k - j + 1) * mx); };
//		} 
//	}
//	cout << res;
//}