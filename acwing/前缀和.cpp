//#include<iostream>
//using namespace std;
//const int N = 100001;
//int da[N],se[N];
//int main()
//{
//	int n, m;
//	cin >> n >> m;
//	//��������
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> da[i];
//		se[i] = da[i] + se[i - 1];
//	}
//	int l, r;
//	//��ȡǰ׺
//	while (n--)
//	{
//		cin >> l >> r;
//		//���l��r����ĺ�
//		cout << se[r] - se[l - 1] << endl;
//	}
//}