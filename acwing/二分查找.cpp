//#include<iostream>
//using namespace std;
////判断target是否在num中,存在则返回下标,不存在则返回-1
//int getdata(int num[],int target,int size)
//{
//	int left = 0;
//	int right = size - 1;
//	//因为区间设置的是左闭右闭，所以这里是可以等于的
//	while (left <= right)
//	{
//		int middle = (left + right) / 2;
//		if (num[middle] > target)
//		{
//			right = middle - 1;
//		}
//		else if (num[middle] < target)
//		{
//			left = middle + 1;
//		}
//		else
//		{
//			return middle;
//		}
//	}
//	return -1;
//}
//int main() 
//{
//	int num[] = { 1,2,4,5,6,7,8,10 };
//	//返回数组的长度
//	int size = sizeof(num) / sizeof(num[0]);
//	int a  = getdata(num, 15, size);
//	cout << a << endl;
//}
