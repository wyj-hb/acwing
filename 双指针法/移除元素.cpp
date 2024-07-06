////示例 1: 给定 nums = [3, 2, 2, 3], val = 3, 函数应该返回新的长度 2, 
////并且 nums 中的前两个元素均为 2。 你不需要考虑数组中超出新长度后面的元素。
//#include<iostream>
//#include<vector>
//using namespace std;
//void getdata(int num[],int size,int target)
//{
//	//快慢指针
//	int fast = 0;
//	int slow = 0;
//	for (int i = fast; i < size; i++)
//	{
//		if (num[fast] == target)
//		{
//			continue;
//		}
//		else
//		{
//			num[slow++] = num[fast];
//		}
//	}
//}
//int main()
//{
//	int num[] = { 3,2,2,3 };
//	int size = sizeof(num) / sizeof(num[0]);
//	int target = 2;
//	getdata(num, size, target);
//	for (auto data : num)
//	{
//		cout << data;
//	}
//}