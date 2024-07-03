#include<bits/stdc++.h>
using namespace std;
/*
*	3
	3
	6
	8
*/
/*
*	2
	2
	4
*/
////欧拉函数就是与从1-N中和N互质的个数
//void solve(int data)
//{
//	int res = data;
//	for (int i = 2; i <= data / i; i++)
//	{
//		if (data % i == 0)
//		{
//			res = res / i * (i - 1);
//			//去除该质因子的指数
//			while (data % i == 0)
//			{
//				data = data / i;
//			}
//		}
//	}
//	if(data > 1) res = res / data * (data - 1);
//	cout << res << endl;
//}
//int main()
//{
//	int num;
//	cin >> num;
//	while (num--)
//	{
//		int data;
//		cin >> data;
//		solve(data);
//	}
//}