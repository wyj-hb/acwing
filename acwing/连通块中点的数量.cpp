#include<iostream>
#include<string>
using namespace std;
/*
	5 5
	C 1 2
	Q1 1 2
	Q2 1
	C 2 5
	Q2 5
*/

/*
* 
*	Yes
	2
	3
* 
*/
//const int N = 100100;
////rc����root�ڵ�ĸ���
//int dad[N], data[N],rc[N];
////����ͨ����
//int find(int data)
//{
//	if (dad[data]!= data)
//	{
//		//���Ǹ��ڵ�
//		dad[data] = find(dad[data]);
//	}
//	return dad[data];
//}
////�ϲ���������
//void merge(int num1,int num2)
//{
//	if (num1 == num2)
//	{
//		return;
//	}
//	else
//	{
//		//�ȼ���ֵ���޸ĸ���
//		rc[find(num2)] += rc[find(num1)];
//		dad[find(num1)] = find(num2);
//		
//	}
//}
////
//int main()
//{
//	int n, m;
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++)
//	{
//		dad[i] = i;
//		//��ʼʱ��ͨ����Ϊ1
//		rc[i] = 1;
//	}
//	string c1;
//	int num1, num2;
//	while (m--)
//	{
//		//m�β���
//		cin >> c1;
//		if (c1 == "C")
//		{
//			cin >> num1 >> num2;
//			//�ϲ�
//			merge(num1, num2);
//		}
//		else if (c1 == "Q1")
//		{
//			//�Ƿ���һ������
//			cin >> num1 >> num2;
//			if (find(num1) == find(num2))
//			{
//				cout << "Yes" << endl;
//			}
//			else
//			{
//				cout << "No" << endl;
//			}
//		}
//		else
//		{
//			//��ѯ�����ֵļ������м�����
//			cin >> num1;
//			cout << rc[find(num1)] << endl;
//		}
//	}
//}