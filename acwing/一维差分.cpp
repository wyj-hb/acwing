//#include<iostream>
//using namespace std;
//const int N = 100010;
//int n, m;
//int a[N], b[N];
////左边界右边界,加上的数
//void insert(int l,int r,int c)
//{
//	b[l] += c;
//	b[r + 1] -= c;
//}
//int main()
//{
//	cin >> n >> m;
//	for (int i = 0;i<n;i++)
//	{
//		//插入数据
//		cin >> a[i];
//		//左右区间都是i,则相当于只在i的位置加上数据
//		insert(i, i, a[i]);
//	}
//	while (m--)
//	{
//		int l, r, c;
//		cin >> l >> r >> c;
//		insert(l, r, c);
//	}
//	//更新数据
//	for (int i = 0; i < n; i++)
//	{
//		a[i] = a[i - 1] + b[i];
//		cout << a[i] << " ";
//	}
//}