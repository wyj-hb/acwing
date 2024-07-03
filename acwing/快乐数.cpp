//#include<iostream>
//#include<math.h>
//#include<unordered_set>
//using namespace std;
//int main()
//{
//	//如果是无限循环那么总会出现在结果中
//	int num;
//	cin >> num;
//	unordered_set<int> hash;
//	while (true)
//	{
//		int sum = 0;
//		while (num)
//		{
//			int data = num % 10;
//			sum += pow(data, 2);
//			num = num / 10;
//		}
//		if (sum == 1)
//		{
//			return true;
//		}
//		int s1 = hash.size();
//		hash.insert(sum);
//		int s2 = hash.size();
//		if (s1 == s2)
//		{
//			return false;
//		}
//		num = sum;
//	}
//}