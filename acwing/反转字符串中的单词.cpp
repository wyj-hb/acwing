////151. ��ת�ַ����еĵ���
////����һ���ַ��� s �����㷴ת�ַ����� ���� ��˳��
////���� ���ɷǿո��ַ���ɵ��ַ�����s ��ʹ������һ���ո��ַ����е� ���� �ָ�����
////���� ���� ˳��ߵ��� ���� ֮���õ����ո����ӵĽ���ַ�����
////ע�⣺�����ַ��� s�п��ܻ����ǰ���ո�β��ո���ߵ��ʼ�Ķ���ո񡣷��صĽ���ַ����У����ʼ�Ӧ�����õ����ո�ָ����Ҳ������κζ���Ŀո�
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
//	//ȥ���ո�
//	trim(s);
//	//���ڷ�ת����ַ���,
//	string::iterator fast = s.begin();
//	string::iterator slow = s.begin();
//	reverse(s.begin(), s.end());
//	while (true)
//	{
//		if (fast == s.end() || *(fast) == ' ')
//		{
//			//��ת��slow��fast
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