////����һ���� �ǵݼ�˳�� ������������� nums������ ÿ�����ֵ�ƽ�� ��ɵ������飬Ҫ��Ҳ�� �ǵݼ�˳�� ����
////ʾ�� 1��
////���룺nums = [-4, -1, 0, 2, 3]
////�����[0, 1, 9, 16, 100]
////���ͣ�ƽ���������Ϊ[16, 1, 0, 9, 100]������������Ϊ[0, 1, 9, 16, 100]
//#include<iostream>
//#include<math.h>
//#include<vector>
//using namespace std;
//int main()
//{
//	//ʹ������ָ��
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