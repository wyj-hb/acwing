//#include<iostream>
//#include<string>
//#include<vector>
//using namespace std;
////给定一个字符串，逐个翻转字符串中的每个单词。
////
////示例 1：
////输入 : "the sky is blue"
////输出 : "blue is sky the"
////前后可能存在多于的空格需要删除
//void remove(string &s)
//{
//	//第一个字符前的所有空格,最后一个字符后的所有空格，以及字符与字符之间的两两空格
//	//一个正数，一个倒数
//	//如果空格后是空格删除,复杂度应为O(n)
//	int len1 = s.size();
//	for (int i = 0; i < s.size(); i++)
//	{
//		if (s[i] != ' ')
//		{
//			break;
//		}
//		s.erase(s.begin() + i);
//		i--;
//	}
//	int len2 = s.size()-1;
//	for (int i = len2; i >= 0; i--)
//	{
//		if (s[i] != ' ')
//		{
//			break;
//		}
//		s.erase(s.begin() + i);
//	}
//	for (int i = 0; i < s.size(); i++)
//	{
//		if (s[i] == ' ' && s[i+1] == ' ')
//		{
//			s.erase(s.begin() + i);
//			i--;
//		}
//	}
//}
//int main()
//{
//	/*string s;*/
//	//getline可以读入空格
//	/*getline(cin, s);*/
//	//C++去除前后空格
//	string s = "  a   good   example   ";
//	remove(s);
//	reverse(s.begin(), s.end());
//	//双指针法反转字符串,遇到空格就开始反转
//	int slow = 0;
//	string::iterator it = s.begin();
//	for (int fast = 0; fast < s.size(); fast++)
//	{
//		if (s[fast] == ' ')
//		{
//			//反转
//			reverse(it + slow,it + fast);
//			slow = fast + 1;
//		}
//	}
//	cout << s;
//}