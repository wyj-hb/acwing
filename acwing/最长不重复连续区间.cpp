//#include<iostream>
//#include<vector>
//using namespace std;
//const int Num = 100100;
//int store[Num],v[Num];//全局数组未初始化全为0
//int main()
//{
//	int N;
//	cin >> N;
//	int data;
//	//输入数据
//	for(int i = 0;i<N;i++)
//	{
//		cin >> data;
//		v[i] = data;
//	}
//	//双指针法
//	int slow = 0,res = 0;
//	for (int fast = 0; fast < N; fast++)
//	{
//		//将要加入的数据出现重复值
//		while (store[v[fast]] > 0 && fast > slow)
//		{
//			store[v[slow]]--;
//			slow++;
//		}
//		store[v[fast]]++;
//		res = fast - slow + 1 > res ? fast - slow + 1 : res;
//	}
//	cout << "res:" << res << endl;
//}