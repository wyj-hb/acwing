////151. 反转字符串中的单词
////给你一个字符串 s ，请你反转字符串中 单词 的顺序。
////单词 是由非空格字符组成的字符串。s 中使用至少一个空格将字符串中的 单词 分隔开。
////返回 单词 顺序颠倒且 单词 之间用单个空格连接的结果字符串。
////注意：输入字符串 s中可能会存在前导空格、尾随空格或者单词间的多个空格。返回的结果字符串中，单词间应当仅用单个空格分隔，且不包含任何额外的空格。
//#include<iostream>
//#include<string>
//#include <algorithm>
//using namespace std;
//void trim(string& s)
//{
//	int length = s.size();
//	for (int i = 0; i < s.size();)
//	{
//		if (s[i] == ' ')
//		{
//			if (i == 0 || i == s.size() - 1)
//			{
//				s.erase(s.begin() + i);
//			}
//			else if (i < s.size() -1  && s[i+1] == ' ')
//			{
//				s.erase(s.begin() + i);
//			}
//			else
//			{
//				i++;
//			}
//		}
//		else
//		{
//			i++;
//		}
//	}
//}
//int main()
//{
//	string s;
//	getline(cin, s);
//	//去除空格
//	trim(s);
//	//对于反转后的字符串,
//	string::iterator fast = s.begin();
//	string::iterator slow = s.begin();
//	reverse(s.begin(), s.end());
//	while (true)
//	{
//		if (fast == s.end() || *(fast) == ' ')
//		{
//			//反转从slow到fast
//			reverse(slow, fast);
//			if (fast == s.end())
//			{
//				break;
//			}
//			fast = fast + 1;
//			slow = fast;
//		}
//		else
//		{
//			fast = fast + 1;
//		}
//	}
//	cout << s;
//}