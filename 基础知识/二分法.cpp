//#include<iostream>
//using namespace std;
//int bsearch(int l, int r, int target,int data[])
//{
//	while (l < r)
//	{
//		int mid = (l + r + 1) >> 1;
//		if (data[mid] <= target)l = mid;
//		else r = mid - 1;
//	}
//	return l;
//}
//int main()
//{
//	int data[] = { 1,2,3,4,5,6,7,8 };
//	int length = sizeof(data) / sizeof(data[0]);
//	int target = 5;
//	int index = bsearch(0, length - 1, target,data);
//	cout << index;
//}