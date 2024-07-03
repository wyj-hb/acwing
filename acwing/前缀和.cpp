//#include<iostream>
//using namespace std;
//const int N = 100001;
//int da[N],se[N];
//int main()
//{
//	int n, m;
//	cin >> n >> m;
//	//输入数据
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> da[i];
//		se[i] = da[i] + se[i - 1];
//	}
//	int l, r;
//	//求取前缀
//	while (n--)
//	{
//		cin >> l >> r;
//		//输出l和r区间的和
//		cout << se[r] - se[l - 1] << endl;
//	}
//}