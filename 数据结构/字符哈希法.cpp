//#include<iostream>
//using namespace std;
///*
//*	8 3
//	aabbaabb
//	1 3 5 7
//	1 3 6 8
//	1 2 1 2
//* 
//*/
//
///*
//* 
//*	Yes
//	No
//	Yes
//*/
////字符哈希方法主要用来判断两个字符串之间是否相同
//const int N = 100010;
//int h[N],p[N];
//// 经验值,无需多言
//const int P = 131;
//int solve(int a,int b)
//{
//	return h[b] - (h[a - 1]) * p[b - a + 1];
//}
//int main()
//{
//	int m, n;
//	string str;
//	cin >> m >> n >> str;
//	//首先构造哈希
//	int data = 0, hash;
//	p[0] = 1;
//	for (int i = 1; i <= m; i++) {
//		h[i] = h[i - 1] * P + str[i-1];
//		p[i] = p[i - 1] * P;
//	}
//	int a, b, c, d;
//	while (n--)
//	{
//		//查询
//		cin >> a >> b >> c >> d;
//		if (solve(a, b) == solve(c, d))
//		{
//			cout << "Yes" << endl;
//		}
//		else
//		{
//			cout << "No" << endl;
//		}
//	}
//}