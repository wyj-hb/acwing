//#include<iostream>
//using namespace std;
/*
*	4 5
	M 1 2
	M 3 4
	Q 1 2
	Q 1 3
	Q 3 4
* 
*/
/*
* 
*	Yes
	No
	Yes
*/
/*
*	并查集常见问题:
	1.合并两个集合
*	2.查询两个数是否在一个集合中			
*/
//const int N = 100100;
////存储数据和父元素
//int dad[N];
//int num[N];
//int find(int data)
//{
//	if (dad[data]!= data)
//	{
//		//不是根节点
//		dad[data] = find(dad[data]);
//	}
//	return dad[data];
//}
//bool same(int num1,int num2)
//{
//	//查询两个数是否在同一个集合中
//	if (find(num1) == find(num2))
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}
//void merge(int num1,int num2)
//{
//	dad[find(num1)] = find(num2);
//	return;
//}
//int main()
//{
//	int n,m;
//	cin >> n>>m;
//	for (int i = 1; i <= n; i++)
//	{
//		//存储数据,初始化父节点
//		dad[i] = i;
//	}
//	char c;
//	int num1, num2;
//	while (m--)
//	{
//		//m次操作
//		cin >> c;
//		cin >> num1 >> num2;
//		if (c == 'M')
//		{
//			//合并
//			merge(num1, num2);
//		}
//		else
//		{
//			//是否在同一个集合
//			bool data = same(num1, num2);
//			if (data)
//			{
//				cout << "Yes" << endl;
//			}
//			else
//			{
//				cout << "No" << endl;
//			}
//		}
//	}
//}