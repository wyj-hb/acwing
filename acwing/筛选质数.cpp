/*
*	8
*/
/*
*	4
*/
//#include<bits/stdc++.h>
//using namespace std;
//const int N = 100001;
//int se[N];//�������Ƿ�ɸ
//int primes[N];//������
//void solve1(int data)
//{
//	int count = 0;
//	//1 data ����������,ֱ���ų�
//	for (int i = 2; i < data; i++)
//	{
//		if (se[i] == 0)
//		{
//			//����
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
//		//ɸѡ
//		for (int j = 0; primes[j] * i <= data; j++)
//		{
//			se[primes[j] * i] = 1;
//			//��֤ÿһ����ֻ�ᱻ��С����ɸ��һ��
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