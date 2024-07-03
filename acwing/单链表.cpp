//#include<iostream>
//using namespace std;
//使用数组模拟单链表
//const int N = 100100;
//head为头结点、e存储值,ne存储指针信息,idx表示下一个可以使用的数组位置的下标
//int head, e[N], ne[N], idx;
//void init()
//{
//	head = -1;//初始时head指向为空
//	idx = 0;//idx索引指向数组的第一个位置
//}
//在头结点后插入一个节点
//void insert_head(int x)
//{
//	e[idx] = x;
//	ne[idx] = head;
//	head = idx;
//	idx++;
//}
//在位置k后(索引位置)插入一个节点x
//void insert(int k, int x)
//{
//	e[idx] = x;
//	ne[idx] = ne[k];
//	ne[k] = idx;
//	idx++;
//}
//删除k后面的数据
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
//		第k个数,下标为k-1,所以删除下标为k的数
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