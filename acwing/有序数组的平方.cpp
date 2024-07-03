////给你一个按 非递减顺序 排序的整数数组 nums，返回 每个数字的平方 组成的新数组，要求也按 非递减顺序 排序。
////示例 1：
////输入：nums = [-4, -1, 0, 2, 3]
////输出：[0, 1, 9, 16, 100]
////解释：平方后，数组变为[16, 1, 0, 9, 100]，排序后，数组变为[0, 1, 9, 16, 100]
//#include<iostream>
//#include<math.h>
//#include<vector>
//using namespace std;
//int main()
//{
//	//使用左右指针
//	vector<int> nums{ -5,-3,-2,-1 };
//	vector<int> result(nums.size(), 0);
//	int fast = nums.size() - 1;
//	int slow = 0;
//	int count = nums.size() - 1;
//	while (slow <= fast)
//	{
//		int a1 = pow(nums[slow], 2);
//		int a2 = pow(nums[fast], 2);
//		if (a1 < a2)
//		{
//			result[count--] = a2;
//			fast--;
//		}
//		else
//		{
//			result[count--] = a1;
//			slow++;
//		}
//	}
//	for (auto d : result)
//	{
//		cout << d << " ";
//	}
//}