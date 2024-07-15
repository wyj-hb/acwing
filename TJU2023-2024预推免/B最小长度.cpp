//#include<bits/stdc++.h>
//using namespace std;
//
///*
//3
//abcdefghijklmnopqrstuvwxyz
//assssdfghjklqwertyuiopzxcvbnm
//bca
//*/
//
///*
//26
//29
//-1
//*/
//int t;
//const int N = 100010;
//int f[N];
//bool is_ok()
//{
//	for (int i = 0; i <= 25; i++)
//	{
//		if (!f[i]) return false;
//	}
//	return true;
//}
//void solve(string s)
//{
//	memset(f, 0, sizeof f);
//	for (int i = 0; i < s.size(); i++)
//	{
//		f[s[i] - 'a']++;
//		if (i >= 25 && is_ok())
//		{
//			cout << i + 1 << endl;
//			return ;
//		}
//	}
//	cout << -1;
//	return;
//}
//int main()
//{
//	cin >> t;
//	string s;
//	while (t--)
//	{
//		cin >> s;
//		//长度小于26
//		if (s.size() < 26)
//		{
//			cout<< -1<<endl;
//			continue;
//		}
//		solve(s);
//	}
//}