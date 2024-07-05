#include<bits/stdc++.h>
using namespace std;
/*
*	2
	6
	8
*/
/*
*	2 1
	3 1

	2 3
*/
//void solve(int data)
//{
//	//这里为什么要让i<=data / i :只需遍历最大的数中的那个较小的数即可
//	for (int i = 2; i <= data / i; i++)
//	{
//		if (data % i == 0)
//		{
//			int count = 0;
//			while (data % i == 0)
//			{
//				data = data / i;
//				count++;
//			}
//			cout << i << " " << count << endl;
//		}
//	}
//	//大于1说明存在最大的质数
//	if (data > 1) cout <<data<<" "<< 1<<endl;
//	cout << endl;
//}
//int main()
//{
//	int num;
//	cin >> num;
//	int data;
//	while (num--)
//	{
//		cin >> data;
//		solve(data);
//	}
//}