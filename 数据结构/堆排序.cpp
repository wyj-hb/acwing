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
//	//���ǵ�ͬ��֮����ܴ��ڵĴ�С��ϵ,�����������������Ҫ�Ƚ�
//	int t = num;
//	//���ݸ������±����down����
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
//		//swap ����
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
//		//�Ƚ�С����
//		down(i,n);
//	}
//	while (m--)
//	{
//		//���ϵ�ȡ��Ԫ��,Ȼ����ĩβԪ�ؽ���,down
//		cout << da[1] << " ";
//		da[1] = da[n--];
//		down(1, n);
//	}
//}