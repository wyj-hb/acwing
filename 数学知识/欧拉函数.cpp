#include<bits/stdc++.h>
using namespace std;
/*
*	3
	3
	6
	8
*/
/*
*	2
	2
	4
*/
////ŷ�������������1-N�к�N���ʵĸ���
//void solve(int data)
//{
//	int res = data;
//	for (int i = 2; i <= data / i; i++)
//	{
//		if (data % i == 0)
//		{
//			res = res / i * (i - 1);
//			//ȥ���������ӵ�ָ��
//			while (data % i == 0)
//			{
//				data = data / i;
//			}
//		}
//	}
//	if(data > 1) res = res / data * (data - 1);
//	cout << res << endl;
//}
//int main()
//{
//	int num;
//	cin >> num;
//	while (num--)
//	{
//		int data;
//		cin >> data;
//		solve(data);
//	}
//}