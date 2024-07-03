////给定一个非空的字符串 s ，检查是否可以通过由它的一个子串重复多次构成。
//#include<iostream>
//#include<string>
//#include<vector>
//using namespace std;
//void getnext(vector<int>& data, const string& s)
//{
//	data[0] = 0;
//	int j = 0;
//	for (int i = 1; i < s.size(); i++)
//	{
//		while (s[i] != s[j] && j>0)
//		{
//			j = data[j-1];
//		}
//		if (s[i] == s[j])
//		{
//			j++;
//		}
//		data[i] = j;
//	}
//}
//int main()
//{
//	string s;
//	cin >> s;
//	vector<int> next(s.size());
//	getnext(next, s);
//	int len = s.size();
//	if (next[s.size() - 1] != 0 && len % (len - next[len - 1]) == 0)
//	{
//		return true;
//	}
//	return false;string s;
//	cin >> s;
//	vector<int> next(s.size());
//	getnext(next, s);
//	int len = s.size();
//	if (next[s.size() - 1] != 0 && len % (len - next[len - 1]) == 0)
//	{
//		return true;
//	}
//	return false;
//	
//}