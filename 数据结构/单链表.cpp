//#include<iostream>
//using namespace std;
//ʹ������ģ�ⵥ����
//const int N = 100100;
//headΪͷ��㡢e�洢ֵ,ne�洢ָ����Ϣ,idx��ʾ��һ������ʹ�õ�����λ�õ��±�
//int head, e[N], ne[N], idx;
//void init()
//{
//	head = -1;//��ʼʱheadָ��Ϊ��
//	idx = 0;//idx����ָ������ĵ�һ��λ��
//}
//��ͷ�������һ���ڵ�
//void insert_head(int x)
//{
//	e[idx] = x;
//	ne[idx] = head;
//	head = idx;
//	idx++;
//}
//��λ��k��(����λ��)����һ���ڵ�x
//void insert(int k, int x)
//{
//	e[idx] = x;
//	ne[idx] = ne[k];
//	ne[k] = idx;
//	idx++;
//}
//ɾ��k���������
//void remove(int k)
//{
//	ne[k] = ne[ne[k]];
//}
//int main()
//{
//	int M;
//	cin >> M;
//	char c;
//	int data1,data2;
//	init();
//	for (int i = 0; i < M; i++)
//	{
//		cin >> c >> data1;
//		if (c == 'H')insert_head(data1);
//		��k����,�±�Ϊk-1,����ɾ���±�Ϊk����
//		else if (c == 'D')
//		{
//			if (data1 == 0) head = ne[head];
//			remove(data1-1);
//		}
//		else
//		{
//			cin >> data2; insert(data1-1, data2);
//		}
//	}
//	int n = head;
//	while (ne[n] != -1)
//	{
//		cout << e[n];
//		n = ne[n];
//	}
//	cout << e[n];
//}