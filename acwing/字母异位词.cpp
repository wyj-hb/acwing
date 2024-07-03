//#include<iostream>
//using namespace std;
//int main()
//{
//	string s, t;
//	cin >> s >> t;
//	int data1[27] = { 0 };
//	int data2[27] = {0};
//	for (auto c : s)
//	{
//		data1[c - 'a']++;
//	}
//	for (auto c : t)
//	{
//		data2[c - 'a']++;
//	}
//	for (int i = 0; i < 27; i++)
//	{
//		if (data1[i] != data2[i])
//		{
//			cout << false;
//			break;
//		}
//	}
//	return true;
//}