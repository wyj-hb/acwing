//给你两个字符串 haystack 和 needle ，请你在 haystack 字符串中找出 needle 字符串的第一个匹配项的下标（下标从 0 开始）。
//如果 needle 不是 haystack 的一部分，则返回 - 1 。
//#include<iostream>
//#include<string>
//using namespace std;
//int main()
//{
//	string s1, s2;
//	cin >> s1 >> s2;
//	判断s1中是否存在s2
//	int fast = 0;
//	int slow = 0;
//	for (int i = 0; i < s1.size(); i++)
//	{
//		int begin = i;
//		for (int j = 0; j < s2.size(); j++)
//		{
//			if (s1[begin] != s2[j])
//			{
//				break;
//			}
//			else if (j == s2.size() - 1)
//			{
//				cout << i;
//				return i;
//			}
//			else
//			{
//				begin++;
//			}
//		}
//	}
//	cout << -1;
//	return -1;
//}