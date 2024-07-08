#include<iostream>
using namespace std;
/*
*  4
*/
/*
*   .Q..
	...Q
	Q...
	..Q.

	..Q.
	Q...
	...Q
	.Q..
*	
*/
////任意一个皇后不能位于一行一列或者一个对角线上
//const int N = 10;
////存储网格
//int n;
//int path[N];
////不用考虑行因为数据是按照行来进行的
//int col[N], dia[N], udia[N];
//void dfs(int data)
//{
//	if (data == n + 1)
//	{
//		for (int i = 1; i <= n; i++)
//		{
//			for (int j = 1; j <= n; j++)
//			{
//				if (path[i] == j)
//				{
//					cout << "Q";
//				}
//				else
//				{
//					cout << ".";
//				}
//			}
//			cout << endl;
//		}
//		cout << endl;
//		return;
//	}
//	//每次遍历每一列,使用data来控制列
//	for (int i = 1; i <= n; i++)
//	{
//		//列、主对角线、反对角线,注意数据从1开始存储,因此下标最大为9
//		if (!col[i] && !dia[i + data] && !udia[9 - i+data])
//		{
//			//表示第data行上在第i列放置皇后
//			path[data] = i;
//			col[i] = dia[i + data] = udia[9 - i + data] = 1;//访问了
//			dfs(data + 1);
//			col[i] = dia[i + data] = udia[9 - i + data] = 0;//回溯
//		}
//	}
//}
//int main()
//{
//	cin >> n;
//	//从第一行开始搜
//	dfs(1);
//}