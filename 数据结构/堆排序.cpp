//#include<iostream>
//using namespace std;
///*
//	5 3
//    4 5 1 3 2
//*/
///*
//* 
//*   1 2 3
//*/
//const int N = 100100;
//int da[N];
//void down(int num,int size)
//{
//	//考虑到同层之间可能存在的大小关系,因此左右两个数均需要比较
//	int t = num;
//	//根据给出的下标进行down操作
//	if (num*2<=size && da[t] > da[num * 2])
//	{
//		t = num * 2;
//	}
//	if ((num * 2 + 1)<=size && da[t] > da[num * 2 + 1])
//	{
//		t = num * 2 + 1;
//	}
//	if (t != num)
//	{
//		//swap 交换
//		swap(da[t], da[num]);
//		down(t, size);
//	}
//}
//int main()
//{
//	int n, m;
//	cin >> n >> m;
//	int data;
//	for (int i = 1; i <= n; i++)
//	{
//		cin>>da[i];
//	}
//	for (int i = n / 2; i >= 1; i--)
//	{
//		//先建小根堆
//		down(i,n);
//	}
//	while (m--)
//	{
//		//不断地取首元素,然后与末尾元素交换,down
//		cout << da[1] << " ";
//		da[1] = da[n--];
//		down(1, n);
//	}
//}