////����һ���ַ��� s��������Сд��ĸ�������ַ������дһ�����������ַ����е���ĸ�ַ����ֲ��䣬����ÿ�������ַ��滻Ϊnumber��
////���磬���������ַ��� "a1b2c3"������Ӧ�ý���ת��Ϊ "anumberbnumbercnumber"��
////���������ַ��� "a5b"������Ӧ�ý���ת��Ϊ "anumberb"
////���룺һ���ַ��� s, s ������Сд��ĸ�������ַ���
////�������ӡһ���µ��ַ���������ÿ�������ַ������滻Ϊ��number
////�������룺a1b2c3
////���������anumberbnumbercnumber
////���ݷ�Χ��1 <= s.length < 10000��
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
//	//�����Ŀ����Ҫ������ʶ��Ҫ�����¿��ٿռ�
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
//	//resize�� �¿��ٵ�λ��Ϊ��
//	for (int i = length - 1; i >=0; i--)
//	{
//		if (judgment(s[i]))
//		{
//			//��
//			for (int i = target.size()-1;i>=0;i--)
//			{
//				s[now--] = target[i];
//			}
//		}
//		else
//		{
//			//����
//			s[now--] = s[i];
//		}
//	}
//	cout << s;
//}