//#include<iostream>
//using namespace std;
//const int M = 1000001;
////hh�Ƕ�ͷ,tt�Ƕ�β,��ͷ����,��β���
//int que[M], hh = 0, tt = 0;
////���
//void push(int x)
//{
//	que[tt++] = x;
//}
////����
//void pop()
//{
//	hh++;
//}
////�ж��Ƿ�Ϊ��
//bool isempty()
//{
//	if (hh == tt)
//	{
//		return true;
//	}
//	return false;
//}
//int query()
//{
//	return que[hh];
//}
//int main()
//{
//	int M;
//	cin >> M;
//	string mes;
//	int data;
//	for (int i = 0; i < M; i++)
//	{
//		cin >> mes;
//
//		if (mes == "push")
//		{
//			cin >> data;
//			push(data);
//		}
//		else if (mes == "empty")
//		{
//			bool num = query();
//			if (num)
//			{
//				cout << "No" << endl;
//			}
//			else
//			{
//				cout << "Yes" << endl;
//			}
//		}
//		else if (mes == "pop")
//		{
//			pop();
//		}
//		else
//		{
//			//query
//			int num = query();
//			cout << num << endl;
//		}
//	}
//}