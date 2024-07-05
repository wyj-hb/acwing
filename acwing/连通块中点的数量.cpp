#include<iostream>
#include<string>
using namespace std;
/*
	5 5
	C 1 2
	Q1 1 2
	Q2 1
	C 2 5
	Q2 5
*/

/*
* 
*	Yes
	2
	3
* 
*/
//const int N = 100100;
////rc代表root节点的个数
//int dad[N], data[N],rc[N];
////找连通区域
//int find(int data)
//{
//	if (dad[data]!= data)
//	{
//		//不是根节点
//		dad[data] = find(dad[data]);
//	}
//	return dad[data];
//}
////合并两个区域
//void merge(int num1,int num2)
//{
//	if (num1 == num2)
//	{
//		return;
//	}
//	else
//	{
//		//先加上值再修改父亲
//		rc[find(num2)] += rc[find(num1)];
//		dad[find(num1)] = find(num2);
//		
//	}
//}
////
//int main()
//{
//	int n, m;
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++)
//	{
//		dad[i] = i;
//		//初始时连通区域为1
//		rc[i] = 1;
//	}
//	string c1;
//	int num1, num2;
//	while (m--)
//	{
//		//m次操作
//		cin >> c1;
//		if (c1 == "C")
//		{
//			cin >> num1 >> num2;
//			//合并
//			merge(num1, num2);
//		}
//		else if (c1 == "Q1")
//		{
//			//是否在一个集合
//			cin >> num1 >> num2;
//			if (find(num1) == find(num2))
//			{
//				cout << "Yes" << endl;
//			}
//			else
//			{
//				cout << "No" << endl;
//			}
//		}
//		else
//		{
//			//查询该数字的集合中有几个点
//			cin >> num1;
//			cout << rc[find(num1)] << endl;
//		}
//	}
//}