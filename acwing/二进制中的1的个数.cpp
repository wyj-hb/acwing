//#include<iostream>
//using namespace std;
//const int N = 1000001;
//int A[N];
//void solve(int data)
//{
//	//��������ݵĶ����Ʊ�ʾ��1�ĸ���
//	/*int count = 0;
//	while (data)
//	{
//		data = data & (data - 1);
//		count++;
//	}
//	cout << count << " ";*/
//	//�ж�һ�����Ƿ���2��n�η�
//	//���λΪ1������Ϊ0��Ҳ����1
//	/*if (data & (data - 1) == 0)
//	{
//		cout << "true";
//	}
//	else
//	{
//		cout << "false";
//	}*/
//	//ͳ�ƶ�����������1�ĸ���
//	int count = 0;
//	for (int i = 0; i < 32; i++)
//	{
//		//int ���͵�����32λ
//		if (data >> i & 1) count++;
//	}
//	cout << count << " ";
//}
//int main()
//{
//	int n; cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> A[i];
//	}
//	for (int i = 0; i < n; i++)
//	{
//		solve(A[i]);
//	}
//}