//#include<iostream>
//using namespace std;
//const int N = 100100;
//int ne[N];
//int main()
//{
//	int n1, n2;
//	string s1, s2;
//	cin >> n1 >> s1 >> n2 >> s2;
//	//求解next数组
//	for (int i = 2, j = 0; i <= n2; i++)
//	{
//		while (j && s2[i] != s2[j]) j = ne[j-1];
//		if (s2[i] == s2[j]) j++;//j++的位置重新开始计算,此时i和j前相同个数各个相等
//		ne[i] = j;
//	}
//	//匹配
//	for (int i = 0, j = 0; i < n1; i++)
//	{
//		//从头开始匹配子串
//		while (j && s1[i] != s2[j]) j = ne[j-1];
//		if (s1[i] == s2[j]) j++;
//		if (j == n2)
//		{
//			cout << i << endl;
//			break;
//		}
//	}
//}