//#include<iostream>
//using namespace std;
///*
//	4 5
//	1 2
//	2 4
//	3 4
//	4 5
//*/
//
///*
//	10
//*/
//const int N = 1001;
//int a, b;
//int res[N];
//int main()
//{
//	cin >> a >> b;
//	int n1,n2;
//	for (int i = 1; i <= a; i++)
//	{
//		cin >> n1 >> n2;
//		for (int j = n1; j <= b; j++)
//		{
//			//Ϊʲô��������Ϊʹ�õ���ͬһ���,��0/1ʹ�õ�����һ���
//			res[j] = max(res[j], res[j - n1] + n2);
//		}
//	}
//	cout << res[b];
//}