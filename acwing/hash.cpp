//#include<iostream>
//using namespace std;
///*
//*	输入样例：
//	5
//	I 1
//	I 2
//	I 3
//	Q 2
//	Q 5
//	输出样例：
//	Yes
//	No
//* 
//*/
//const int N = 100003;//一般取质数
//// 存储数据
//int h[N];
////拉链法,节点、next数组和当前指向
//int e[N], ne[N], idx;
//void solve()
//{
//	char c;
//	int data;
//	cin >> c >> data;
//	//首先计算哈希,映射数据
//	int k = (data % N + N) % N;//可能存在负数
//	if (c == 'I')
//	{
//		//插入数据
//		//idx代表分配到这个索引了,e[idx]首先存储要输入的数据,把该节点看做插入到k位置,则ne[idx]=h[k],h[k] = idx++
//		e[idx] = data; ne[idx] = h[k]; h[k] = idx++;
//	}
//	else
//	{
//		//查询操作
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
//	找出距离数据个数最小的质数,100003
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
