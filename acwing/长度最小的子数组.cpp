//����һ������ n ���������������һ�������� s ���ҳ���������������� �� s �ĳ�����С�� ���� �����飬
//�������䳤�ȡ���������ڷ��������������飬���� 0��
//���룺s = 7, nums = [2, 3, 1, 2, 4, 3]
//�����2
//���ͣ�������[4, 3] �Ǹ������µĳ�����С�������顣
//#include<iostream>
//#include<math.h>
//#include<vector>
//using namespace std;
//int main()
//{
//	//ʹ�û�������,���Ҵ��ڻ���ֹͣ��������С��s�ʹ��ڵ���s
//	vector<int> nums{ 2,3,1,2,4,3 };
//	int slow = 0,fast = 0,sum= 0;
//	int minlength = INT_MAX;
//	int s = 7;
//	for (; fast < nums.size(); fast++)
//	{
//		if (sum >= s)
//		{
//			//�ﵽ��ֹͣ����
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
//		//�ﵽ��ֹͣ����
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
