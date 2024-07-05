//#include<iostream>
//using namespace std;
//const int N = 100100;
////表示栈和当前的栈顶指针
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
////获得栈顶元素
//int get_top()
//{
//	return ss[tt];
//}
////从栈顶弹出一个数
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
//			//判断空
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
