//#include<iostream>
//using namespace std;
//const int M = 1000001;
////hh是队头,tt是队尾,队头出队,队尾入队
//int que[M], hh = 0, tt = 0;
////入队
//void push(int x)
//{
//	que[tt++] = x;
//}
////出队
//void pop()
//{
//	hh++;
//}
////判断是否为空
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