#include<bits/stdc++.h>
using namespace std;
/*
*	2
	6
	8
*/
/*
*	1 2 3 6 
	1 2 4 8 
*/
vector<int> v;
////枚举
//void solve(int data)
//{
//	//寻找data的约数
//	for (int i = 1; i <= data / i; i++)
//	{
//		if (data % i == 0)
//		{
//			//是约数
//			v.push_back(i);
//			if (i != data / i)
//			{
//				v.push_back(data / i);
//			}
//		}
//	}
//	sort(v.begin(), v.end());
//	for (auto c : v)
//	{
//		cout << c << " ";
//	}
//	cout << endl;
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
//		v.clear();
//	}
//}