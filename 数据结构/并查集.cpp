//#include<iostream>
//using namespace std;
/*
*	4 5
	M 1 2
	M 3 4
	Q 1 2
	Q 1 3
	Q 3 4
* 
*/
/*
* 
*	Yes
	No
	Yes
*/
/*
*	���鼯��������:
	1.�ϲ���������
*	2.��ѯ�������Ƿ���һ��������			
*/
//const int N = 100100;
////�洢���ݺ͸�Ԫ��
//int dad[N];
//int num[N];
//int find(int data)
//{
//	if (dad[data]!= data)
//	{
//		//���Ǹ��ڵ�
//		dad[data] = find(dad[data]);
//	}
//	return dad[data];
//}
//bool same(int num1,int num2)
//{
//	//��ѯ�������Ƿ���ͬһ��������
//	if (find(num1) == find(num2))
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}
//void merge(int num1,int num2)
//{
//	dad[find(num1)] = find(num2);
//	return;
//}
//int main()
//{
//	int n,m;
//	cin >> n>>m;
//	for (int i = 1; i <= n; i++)
//	{
//		//�洢����,��ʼ�����ڵ�
//		dad[i] = i;
//	}
//	char c;
//	int num1, num2;
//	while (m--)
//	{
//		//m�β���
//		cin >> c;
//		cin >> num1 >> num2;
//		if (c == 'M')
//		{
//			//�ϲ�
//			merge(num1, num2);
//		}
//		else
//		{
//			//�Ƿ���ͬһ������
//			bool data = same(num1, num2);
//			if (data)
//			{
//				cout << "Yes" << endl;
//			}
//			else
//			{
//				cout << "No" << endl;
//			}
//		}
//	}
//}