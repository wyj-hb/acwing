//#include<iostream>
//using namespace std;
//const int N = 100100;
////��ʾջ�͵�ǰ��ջ��ָ��
//int ss[N],tt = -1;
//void push(int data)
//{
//	ss[++tt] = data;
//}
//bool empty()
//{
//	if (tt < 0)
//	{
//		return true;
//	}
//	return false;
//}
////���ջ��Ԫ��
//int get_top()
//{
//	return ss[tt];
//}
////��ջ������һ����
//void out()
//{
//	tt--;
//}
//int main()
//{
//	int M;
//	cin >> M;
//	string cmd;
//	int data;
//
//	while (M--)
//	{
//		cin >> cmd;
//		if (cmd == "push")
//		{
//			cin >> data;
//			push(data);
//		}
//		else if (cmd == "query")
//		{
//			int data = get_top();
//			cout << data;
//			cout << endl;
//		}
//		else if (cmd == "pop")
//		{
//			out();
//		}
//		else
//		{
//			//�жϿ�
//			bool data = empty();
//			if (data)
//			{
//				cout << "Yes";
//			}
//			else
//			{
//				cout << "No";
//			}
//			cout << endl;
//		}
//		
//	}
//}
