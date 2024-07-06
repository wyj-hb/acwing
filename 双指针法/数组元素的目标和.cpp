//#include<iostream>
//using namespace std;
//const int num = 100100;
//int A[num], B[num];
//int main()
//{
//	int n, m, x;
//	cin >> n >> m >> x;
//	int data;
//
//	for (int i = 0; i < n; i++)
//	{
//		cin >> A[i];
//	}
//	for (int i = 0; i < m; i++)
//	{
//		cin >> B[i];
//	}
//	//本身就是升序的
//	int a1 = 0, a2 = 0,flag = 0;
//	while (a1 < n)
//	{
//		while (a2 < m)
//		{
//			if (A[a1] + B[a2] == x)
//			{
//				cout << a1 << " " << a2 << endl;
//				flag = 1;
//				break;
//			}
//			else if (A[a1] + B[a2] > x)
//			{
//				break;
//			}
//			a2++;
//		}
//		if (flag)
//		{
//			break;
//		}
//		a1++;
//		a2 = 0;
//	}
//}