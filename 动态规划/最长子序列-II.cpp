//#include<iostream>
//#include<vector>
//using namespace std;
///*
//7
//3 1 2 1 8 5 6
//*/
///*
//4
//*/
//const int N = 100010;
//int n;
//int res[N];
//int d[N],f[N],fl;
//int binary_search(int data)
//{
//	int l = 1;
//	int r = fl;
//	while (l < r)
//	{
//		int mid = (l + r)  >> 1;
//		if (f[mid] >= data) r = mid;
//		else l = mid + 1;
//	}
//	return l;
//}
//int main()
//{
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> d[i];
//		//ö��
//		if (d[i] > f[fl])
//		{
//			f[++fl] = d[i];
//		}
//		else
//		{
//			//�ҵ���Ӧ�ò����λ��
//			int idx = binary_search(d[i]);
//			f[idx] = d[i];
//		}
//	}
//	cout << fl;
//}