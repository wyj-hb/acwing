//#include<iostream>
//using namespace std;
///*
//*	����������
//	5
//	I 1
//	I 2
//	I 3
//	Q 2
//	Q 5
//	���������
//	Yes
//	No
//* 
//*/
//const int N = 100003;//һ��ȡ����
//// �洢����
//int h[N];
////������,�ڵ㡢next����͵�ǰָ��
//int e[N], ne[N], idx;
//void solve()
//{
//	char c;
//	int data;
//	cin >> c >> data;
//	//���ȼ����ϣ,ӳ������
//	int k = (data % N + N) % N;//���ܴ��ڸ���
//	if (c == 'I')
//	{
//		//��������
//		//idx������䵽���������,e[idx]���ȴ洢Ҫ���������,�Ѹýڵ㿴�����뵽kλ��,��ne[idx]=h[k],h[k] = idx++
//		e[idx] = data; ne[idx] = h[k]; h[k] = idx++;
//	}
//	else
//	{
//		//��ѯ����
//		for (int i = h[k];i!=-1; i=ne[i])
//		{
//			if (e[i] == data)
//			{
//				cout << "Yes" << endl;
//				return;
//			}
//		}
//		cout << "No" << endl;
//	}
//}
//int main()
//{
//	/*
//	�ҳ��������ݸ�����С������,100003
//	for (int i = 100000;; i++)
//	{
//		bool flag = true;
//		for (int j = 2; j <= i / j; j++)
//		{
//			if (i % j == 0)
//			{
//				flag = false;
//				break;
//			}
//		}
//		if (flag)
//		{
//			cout << i << endl;
//			break;
//		}
//	}*/
//	int n;
//	cin >> n;
//	memset(h, -1, sizeof h);
//	while (n--)
//	{
//		solve();
//	}
//}
