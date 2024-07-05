#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
int MAX = 1e9 + 7;
/*
*	3
	2
	6
	8
* 
*/

/*
* 12
*/
//unordered_map<int, int> m;
//int res = 1;
//int main()
//{
//	int n;
//	cin >> n;
//	while (n--)
//	{
//		int data;
//		cin >> data;
//		int count = 0;
//		for (int i = 2; i <= data/i; i++)
//		{
//			while (data % i == 0)
//			{
//				m[i]++;
//				data = data / i;
//			}
//		}
//		//仅剩的大于sqrt n的数
//		if (data > 1) m[data]++;
//	}
//	for (auto p : m) res = res * (p.second + 1);
//	cout << res % MAX << endl;
//}