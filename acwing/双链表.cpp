//#include<iostream>
//#include<string>
//using namespace std;
//const int N = 100100;
//int e[N], r[N], l[N],idx;
//void init()
//{
//	//��ʾ�Ѿ�ռ��������Ԫ��
//	idx = 2;
//	r[0] = 1;
//	l[1] = 0;
//}
////������һ���ڵ�k(�±�)֮�����һ��Ԫ��
//void insert(int k,int x)
//{
//	e[idx] = x;
//	r[idx] = r[k];
//	l[idx] = k;
//	l[r[k]] = idx;
//	r[k] = idx;
//	idx++;
//}
////ɾ������һ���ڵ�����Ԫ��
//void remove(int k)
//{
//	l[r[r[k]]] = l[r[k]];
//	int data = r[r[k]];
//	r[k] = data;
//}
//int main()
//{
//	int M;
//	cin >> M;
//	string c;
//	int data1, data2;
//	init();
//
//
//	for (int i = 0; i < M; i++)
//	{
//		cin >> c >> data1;
//		if (c == "L")
//		{
//			//�����������˲�����x,����˵���Ӧ����ͷ�����ұ�
//			insert(0, data1);
//		}
//		else if (c == "R")
//		{
//			//�����Ҷ˲���
//			insert(l[1], data1);
//		}
//		else if (c == "D")
//		{
//			//����k���������ɾ��,Ҳ����ɾ���±�Ϊk+1����
//			remove(l[data1+1]);
//		}
//		else if (c == "IL")
//		{
//			//�ڵ�k���������������һ����,�ڵ�k-1�����������һ��
//			cin >> data2;
//			insert(l[data1+1], data2);
//		}
//		else
//		{
//			//�ڵ�k������������Ҳ������
//			cin >> data2;
//			insert(data1+1, data2);
//		}
//	}
//	int n = r[0];
//	while (r[n] != 1)
//	{
//		cout << e[n];
//		n = r[n];
//	}
//	cout << e[n];
//}