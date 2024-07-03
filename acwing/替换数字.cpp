////给定一个字符串 s，它包含小写字母和数字字符，请编写一个函数，将字符串中的字母字符保持不变，而将每个数字字符替换为number。
////例如，对于输入字符串 "a1b2c3"，函数应该将其转换为 "anumberbnumbercnumber"。
////对于输入字符串 "a5b"，函数应该将其转换为 "anumberb"
////输入：一个字符串 s, s 仅包含小写字母和数字字符。
////输出：打印一个新的字符串，其中每个数字字符都被替换为了number
////样例输入：a1b2c3
////样例输出：anumberbnumbercnumber
////数据范围：1 <= s.length < 10000。
//#include<iostream>
//#include<vector>
//using namespace std;
//bool judgment(char c)
//{
//	if (c < 'a')
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}
//int main()
//{
//	string s = "a1b2c3";
//	//这道题目最重要的是意识到要先重新开辟空间
//	int count = 0;
//	for (auto c : s)
//	{
//		if (judgment(c))
//		{
//			count++;
//		}
//	}
//	int length = s.size();
//	s.resize(length + 5 * count);
//	int now = s.size() - 1;
//	string target = "number";
//	//resize后 新开辟的位置为空
//	for (int i = length - 1; i >=0; i--)
//	{
//		if (judgment(s[i]))
//		{
//			//是
//			for (int i = target.size()-1;i>=0;i--)
//			{
//				s[now--] = target[i];
//			}
//		}
//		else
//		{
//			//不是
//			s[now--] = s[i];
//		}
//	}
//	cout << s;
//}