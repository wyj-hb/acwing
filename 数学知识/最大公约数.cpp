//#include<iostream>
//using namespace std;
///*
//* 
//	2
//	3 6
//	4 6
//*/
///*
//*	3
//	2
//*/
//int solve(int a, int b)
//{
//	//b为0直接是a
//	return b ? solve(b, a % b) : a;
//}
//int main()
//{
//	int num;
//	cin >> num;
//	while (num--)
//	{
//		int a1,a2;
//		cin >> a1 >> a2;
//		int data = solve(a1, a2);
//		cout << data << endl;
//	}
//}
