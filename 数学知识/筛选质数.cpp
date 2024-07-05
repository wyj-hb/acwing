/*
*	8
*/
/*
*	4
*/
//#include<bits/stdc++.h>
//using namespace std;
//const int N = 100001;
//int se[N];//存数据是否被筛
//int primes[N];//存质数
//void solve1(int data)
//{
//	int count = 0;
//	//1 data 都不是质数,直接排除
//	for (int i = 2; i < data; i++)
//	{
//		if (se[i] == 0)
//		{
//			//质数
//			count++;
//			for (int j = i + i; j < data; j+=i)
//			{
//				se[j] = 1;
//			}
//		}
//	}
//	cout << count<<endl;
//}
//void solve2(int data)
//{
//	int count = 0;
//	for (int i = 2; i <= data; i++)
//	{
//		if (se[i] == 0) primes[count++] += i;
//		//筛选
//		for (int j = 0; primes[j] * i <= data; j++)
//		{
//			se[primes[j] * i] = 1;
//			//保证每一个数只会被最小质数筛掉一次
//			if (i % primes[j] == 0)
//			{
//				break;
//			}
//		}
//	}
//	cout << count;
//}
//int main()
//{
//	int a;
//	cin >> a;
//	/*solve1(a);*/
//	solve2(a);
//}