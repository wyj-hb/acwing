//#include<bits/stdc++.h>
//#include<unordered_map>
//using namespace std;
///*
//	3
//	2
//	6
//	8
//*/
///*
//* 252
//*/
//unordered_map<int, int> m;
//int main()
//{
//	int num;
//	cin >> num;
//	while (num--)
//	{
//		int data;
//		cin >> data;
//		//约数之和
//		for (int i = 2; i <= data / i; i++)
//		{
//			while (data % i == 0)
//			{
//				m[i]++;
//				data = data / i;
//			}
//		}
//		if (data > 1) m[data]++;
//	}
//	//遍历map
//	int res = 1;
//	for (auto c : m)
//	{
//		int a = c.first;
//		int b = c.second;
//		int t = 1;
//		while (c.second--) t = t * a + 1;
//		res *= t ;
//	}
//	cout << res;
//}