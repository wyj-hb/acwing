//#include<iostream>
//#include<string>
//#include<vector>
//using namespace std;
////����һ���ַ����������ת�ַ����е�ÿ�����ʡ�
////
////ʾ�� 1��
////���� : "the sky is blue"
////��� : "blue is sky the"
////ǰ����ܴ��ڶ��ڵĿո���Ҫɾ��
//void remove(string &s)
//{
//	//��һ���ַ�ǰ�����пո�,���һ���ַ�������пո��Լ��ַ����ַ�֮��������ո�
//	//һ��������һ������
//	//����ո���ǿո�ɾ��,���Ӷ�ӦΪO(n)
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
//	//getline���Զ���ո�
//	/*getline(cin, s);*/
//	//C++ȥ��ǰ��ո�
//	string s = "  a   good   example   ";
//	remove(s);
//	reverse(s.begin(), s.end());
//	//˫ָ�뷨��ת�ַ���,�����ո�Ϳ�ʼ��ת
//	int slow = 0;
//	string::iterator it = s.begin();
//	for (int fast = 0; fast < s.size(); fast++)
//	{
//		if (s[fast] == ' ')
//		{
//			//��ת
//			reverse(it + slow,it + fast);
//			slow = fast + 1;
//		}
//	}
//	cout << s;
//}