//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//vector<vector<int>> fourSum(vector<int>& nums, int target)
//{
//    vector<vector<int>> res;
//    if (nums.size() < 4)
//    {
//        return res;
//    }
//    int left = 0;
//    int right = nums.size() - 1;
//    sort(nums.begin(), nums.end());
//    //��֦
//    while (left < nums.size() - 3)//����wc
//    {
//        if (nums[left] < target && nums[left] < 0 && target < 0)
//        {
//            break;
//        }
//        right = nums.size() - 1;
//        while (right > left + 2)
//        {
//            if (nums[right] > target && nums[right] > 0 && target > 0)
//            {
//                break;
//            }
//            int i = left + 1;
//            int j = right - 1;
//            while (j > i)
//            {
//                // nums[k] + nums[i] + nums[left] + nums[right] > target �����
//                if ((long)nums[j] + nums[i] + nums[left] + nums[right] > target)
//                {
//                    j--;
//                    // nums[k] + nums[i] + nums[left] + nums[right] < target �����
//                }
//                else if ((long)nums[j] + nums[i] + nums[left] + nums[right] < target)
//                {
//                    i++;
//                }
//                else
//                {
//                    res.push_back(vector<int>{nums[j], nums[i], nums[left], nums[right]});
//                    // ��nums[left]��nums[right]ȥ��
//                    while (j > i && nums[j] == nums[j - 1]) j--;
//                    while (j > i && nums[i] == nums[i + 1]) i++;
//                    // �ҵ���ʱ��˫ָ��ͬʱ����
//                    j--;
//                    i++;
//                }
//            }
//            //ȥ��
//            while (right > left + 3 && nums[right] == nums[right - 1])
//            {
//                right--;
//            }
//            right--;
//        }
//        //ȥ��
//        while (left < nums.size() - 4 && nums[left] == nums[left + 1])
//        {
//            left++;
//        }
//        left++;
//    }
//    return res;
//}
//int main()
//{
//    vector<int> data = { -3,-1,0,2,4,5 };
//    fourSum(data, 1);
//}