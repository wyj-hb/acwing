//#include<iostream>
//#include<math.h>
//#include<unordered_set>
//using namespace std;
//int main()
//{
//	//���������ѭ����ô�ܻ�����ڽ����
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