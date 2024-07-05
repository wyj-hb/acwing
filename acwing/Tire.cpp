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
//// son用来存储每个节点存储的数据情况,idx表示当前使用到的节点索引,cnt记录每个节点使用的次数
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
//		//插入
//		for (int i = 0; i < str.size(); i++)
//		{
//			data = str[i] - 'a';
//			if (!son[p][data])
//			{
//				//不存在则建立
//				son[p][data] = ++idx;
//			}
//			p = son[p][data];
//		}
//		cnt[p]++;
//	}
//	else
//	{
//		//查询操作
//		int data;
//		int p = 0;
//		for (int i = 0; i < str.size(); i++)
//		{
//			data = str[i] - 'a';
//			if (!son[p][data])
//			{
//				//不存在则建立
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