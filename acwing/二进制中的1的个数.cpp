//#include<iostream>
//using namespace std;
//const int N = 1000001;
//int A[N];
//void solve(int data)
//{
//	//输出该数据的二进制表示的1的个数
//	/*int count = 0;
//	while (data)
//	{
//		data = data & (data - 1);
//		count++;
//	}
//	cout << count << " ";*/
//	//判断一个数是否是2的n次方
//	//最高位为1，其余为0，也就是1
//	/*if (data & (data - 1) == 0)
//	{
//		cout << "true";
//	}
//	else
//	{
//		cout << "false";
//	}*/
//	//统计二进制数据中1的个数
//	int count = 0;
//	for (int i = 0; i < 32; i++)
//	{
//		//int 类型的数有32位
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