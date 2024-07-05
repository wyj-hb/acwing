//#include<iostream>
//using namespace std;
//const int cc = 100001;
////栈和栈顶指针
//int ss[cc],tt = -1;
//int main()
//{
//	int N;
//	cin >> N;
//	for (int i = 1; i <= N; i++)
//	{
//		//当前数据
//		int x;
//		cin >> x;
//		while (tt !=-1 && x <= ss[tt])
//		{
//			//不比x小的则出栈
//			tt--;
//		}
//		if (tt == -1)
//		{
//			//没有元素比他小
//			cout << -1 << " ";
//		}
//		else
//		{
//			cout << ss[tt]<<" ";
//		}
//		//数据入栈
//		ss[++tt] = x;
//	}
//}