#include<iostream>
#include<string>
using namespace std;
/*
	5
	I abc
	Q abc
	Q ab
	I ab
	Q ab
*/

/*
* 
	1
	0
	1
*/
//const int N = 100001;
//// son�����洢ÿ���ڵ�洢���������,idx��ʾ��ǰʹ�õ��Ľڵ�����,cnt��¼ÿ���ڵ�ʹ�õĴ���
//int son[N][26], idx, cnt[N];
//void solve()
//{
//	char c;
//	cin >> c;
//	string str;
//	cin >> str;
//	if (c == 'I')
//	{
//		int data;
//		int p = 0;
//		//����
//		for (int i = 0; i < str.size(); i++)
//		{
//			data = str[i] - 'a';
//			if (!son[p][data])
//			{
//				//����������
//				son[p][data] = ++idx;
//			}
//			p = son[p][data];
//		}
//		cnt[p]++;
//	}
//	else
//	{
//		//��ѯ����
//		int data;
//		int p = 0;
//		for (int i = 0; i < str.size(); i++)
//		{
//			data = str[i] - 'a';
//			if (!son[p][data])
//			{
//				//����������
//				cout << 0 << endl;
//				return;
//			}
//			p = son[p][data];
//		}
//		cout << cnt[p] << endl;
//	}
//}
//int main()
//{
//	int n;
//	cin >> n;
//	while (n--)
//	{
//		solve();
//	}
//}