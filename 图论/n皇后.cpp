#include<iostream>
using namespace std;
/*
*  4
*/
/*
*   .Q..
	...Q
	Q...
	..Q.

	..Q.
	Q...
	...Q
	.Q..
*	
*/
////����һ���ʺ���λ��һ��һ�л���һ���Խ�����
//const int N = 10;
////�洢����
//int n;
//int path[N];
////���ÿ�������Ϊ�����ǰ����������е�
//int col[N], dia[N], udia[N];
//void dfs(int data)
//{
//	if (data == n + 1)
//	{
//		for (int i = 1; i <= n; i++)
//		{
//			for (int j = 1; j <= n; j++)
//			{
//				if (path[i] == j)
//				{
//					cout << "Q";
//				}
//				else
//				{
//					cout << ".";
//				}
//			}
//			cout << endl;
//		}
//		cout << endl;
//		return;
//	}
//	//ÿ�α���ÿһ��,ʹ��data��������
//	for (int i = 1; i <= n; i++)
//	{
//		//�С����Խ��ߡ����Խ���,ע�����ݴ�1��ʼ�洢,����±����Ϊ9
//		if (!col[i] && !dia[i + data] && !udia[9 - i+data])
//		{
//			//��ʾ��data�����ڵ�i�з��ûʺ�
//			path[data] = i;
//			col[i] = dia[i + data] = udia[9 - i + data] = 1;//������
//			dfs(data + 1);
//			col[i] = dia[i + data] = udia[9 - i + data] = 0;//����
//		}
//	}
//}
//int main()
//{
//	cin >> n;
//	//�ӵ�һ�п�ʼ��
//	dfs(1);
//}