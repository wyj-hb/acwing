#include<bits/stdc++.h>
using namespace std;
/*
*	2
	6
	8
*/
/*
*	1 2 3 6 
	1 2 4 8 
*/
vector<int> v;
////ö��
//void solve(int data)
//{
//	//Ѱ��data��Լ��
//	for (int i = 1; i <= data / i; i++)
//	{
//		if (data % i == 0)
//		{
//			//��Լ��
//			v.push_back(i);
//			if (i != data / i)
//			{
//				v.push_back(data / i);
//			}
//		}
//	}
//	sort(v.begin(), v.end());
//	for (auto c : v)
//	{
//		cout << c << " ";
//	}
//	cout << endl;
//}
//int main()
//{
//	int num;
//	cin >> num;
//	while (num--)
//	{
//		int data;
//		cin >> data;
//		solve(data);
//		v.clear();
//	}
//}