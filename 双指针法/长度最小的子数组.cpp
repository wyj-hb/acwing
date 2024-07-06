//给定一个含有 n 个正整数的数组和一个正整数 s ，找出该数组中满足其和 ≥ s 的长度最小的 连续 子数组，
//并返回其长度。如果不存在符合条件的子数组，返回 0。
//输入：s = 7, nums = [2, 3, 1, 2, 4, 3]
//输出：2
//解释：子数组[4, 3] 是该条件下的长度最小的子数组。
//#include<iostream>
//#include<math.h>
//#include<vector>
//using namespace std;
//int main()
//{
//	//使用滑动窗口,左右窗口滑动停止的条件是小于s和大于等于s
//	vector<int> nums{ 2,3,1,2,4,3 };
//	int slow = 0,fast = 0,sum= 0;
//	int minlength = INT_MAX;
//	int s = 7;
//	for (; fast < nums.size(); fast++)
//	{
//		if (sum >= s)
//		{
//			//达到右停止条件
//			while (slow < fast && sum>=s)
//			{
//				sum -= nums[slow];
//				slow++;
//			}
//			minlength = minlength < fast - slow + 1 ? minlength : fast - slow + 1;
//			fast--;
//		}
//		else
//		{
//			sum += nums[fast];
//		}
//	}
//	if (sum >= s)
//	{
//		//达到右停止条件
//		while (slow < fast && sum >= s)
//		{
//			sum -= nums[slow];
//			slow++;
//		}
//		minlength = minlength < fast - slow + 1 ? minlength : fast - slow + 1;
//	}
//	cout << minlength;
//	return minlength == INT_MAX ? 0 : minlength;
//}
