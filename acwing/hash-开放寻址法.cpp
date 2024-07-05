//#include<iostream>
//using namespace std;
///*
//*	思想:开一个大点的空间来存储数据,减少冲突,并使用一个超出数据范围的数来填充,代表该位置未被使用
//*/
//const int N = 100010;
//const int INF = 0x3f3f3f3f;
//int h[N];
//int find(int data)
//{
//	//查找数据,返回两种类型数据:一是该数据未插入,返回其应该被插入的数据的位置。
//	//                          二是该数据被插入,返回其对应的位置
//	int k = (data % N + N) % N;
//	while (h[k] != INF && h[k] != data)
//	{
//		//终止条件:遇到INF或者该位置存储的数据与目标值相同
//		k++;
//		if (k == N)
//		{
//			k = 0;
//		}
//	}
//	return k;
//}
//int main()
//{
//	int n;
//	cin >> n;
//	memset(h,0x3f, sizeof h);
//	int data; char c;
//	while (n--)
//	{
//		cin >> c >> data;
//		int re = find(data);
//		if (c == 'I')
//		{
//			//如果是插入,则此时返回的就是应该插入的位置,
//			h[re] = data;
//		}
//		else
//		{
//			//查询,判断
//			if (h[re] != INF)
//			{
//				//表示是找到数据返回的
//				cout << "Yes" << endl;
//			}
//			else
//			{
//				cout << "No" << endl;
//			}
//		}
//	}
//}