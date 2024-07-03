//#include<iostream>
//#include<string>
//using namespace std;
//const int N = 100100;
//int e[N], r[N], l[N],idx;
//void init()
//{
//	//表示已经占有了两个元素
//	idx = 2;
//	r[0] = 1;
//	l[1] = 0;
//}
////在任意一个节点k(下标)之后插入一个元素
//void insert(int k,int x)
//{
//	e[idx] = x;
//	r[idx] = r[k];
//	l[idx] = k;
//	l[r[k]] = idx;
//	r[k] = idx;
//	idx++;
//}
////删除任意一个节点后面的元素
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
//			//在链表的最左端插入数x,最左端的数应该是头结点的右边
//			insert(0, data1);
//		}
//		else if (c == "R")
//		{
//			//在最右端插入
//			insert(l[1], data1);
//		}
//		else if (c == "D")
//		{
//			//将第k个插入的数删除,也就是删除下标为k+1的数
//			remove(l[data1+1]);
//		}
//		else if (c == "IL")
//		{
//			//在第k个插入的数左侧插入一个数,在第k-1个数右面插入一个
//			cin >> data2;
//			insert(l[data1+1], data2);
//		}
//		else
//		{
//			//在第k个插入的数的右侧插入数
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