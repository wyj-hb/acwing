//���������ַ��� haystack �� needle �������� haystack �ַ������ҳ� needle �ַ����ĵ�һ��ƥ������±꣨�±�� 0 ��ʼ����
//��� needle ���� haystack ��һ���֣��򷵻� - 1 ��
//#include<iostream>
//#include<string>
//using namespace std;
//int main()
//{
//	string s1, s2;
//	cin >> s1 >> s2;
//	�ж�s1���Ƿ����s2
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