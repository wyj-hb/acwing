//#include<bits/stdc++.h>
//using namespace std;
///*
//4
//TJU?TJ
//TJ?
//TTTTJ
//????
//*/
//
///*
//26
//1
//0
//52
//*/
//int t;
//char c[3];
//int cc(string s)
//{
//	int res = 0;
//	for (auto c : s)
//	{
//		if (c == '?')
//		{
//			res++;
//		}
//	}
//	return res;
//}
//void solve(string s)
//{
//	int all_len = cc(s);
//	//双指针法
//	int slow = 0;
//	int res = 0;
//	int cnt = 0;
//	for (int fast = slow; fast < s.size(); fast++)
//	{
//		c[fast - slow] = s[fast];
//		s[fast] == '?' ? cnt++ : cnt = cnt;
//		if (fast - slow < 2)
//		{
//			continue;
//		}
//		else
//		{
//			//处理,判断是否能组成TJU
//			if ((c[0] == 'T' || c[0] == '?') && (c[1] == 'J' || c[1] == '?') && (c[2] == 'U' || c[2] == '?'))
//			{
//				res += pow(26, all_len - cnt);
//				
//			}
//			fast = slow;
//			slow++;
//			cnt = 0;
//			continue;
//		}
//	}
//	cout << res % 1000000007 << endl;
//	return;
//}
//int main()
//{
//	cin >> t;
//	string s;
//	while (t--)
//	{
//		cin >> s;
//		solve(s);
//	}
//}