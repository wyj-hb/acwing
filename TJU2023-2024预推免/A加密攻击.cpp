//#include<bits/stdc++.h>
//using namespace std;
///*
//3
//1895
//24
//222
//*/
//
///*
//11163445
//168
//222
//*/
//const int inf = 0x3f3f3f3f;
//int min_data(int a1, int a2)
//{
//	//求两个数的最小公约数
//	return a2 ? min_data(a2, a1 % a2) : a1;
//}
//int min_multiples(int a1, int a2)
//{
//	return (a1 * a2) / min_data(a1, a2);
//}
//int transport(string s)
//{
//	//将string转为对应的数字
//	int num = s.size();
//	int res = 0;
//
//	for (int i = 0; i < s.size(); i++)
//	{
//		res += (s[i] - '0') * pow(10, --num);
//	}
//	return res;
//}
//int solve(string d)
//{
//	int res = -inf;
//	string copy = d;
//	int dd = transport(d);
//	for (int i = 0; i < d.size()-1; i++)
//	{
//		for (int j = 1; j < d.size(); j++)
//		{
//			swap(copy[i], copy[j]);
//			res = max(res, min_multiples(dd, transport(copy)));
//			swap(copy[i], copy[j]);
//		}
//	}
//	cout << res<<endl;
//	return 0;
//}
//int t;
//int main()
//{
//	cin >> t;
//	string d;
//	while (t--)
//	{
//		cin >> d;
//		solve(d);
//	}
//}