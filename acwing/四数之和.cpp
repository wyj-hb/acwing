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
//    //减枝
//    while (left < nums.size() - 3)//负数wc
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
//                // nums[k] + nums[i] + nums[left] + nums[right] > target 会溢出
//                if ((long)nums[j] + nums[i] + nums[left] + nums[right] > target)
//                {
//                    j--;
//                    // nums[k] + nums[i] + nums[left] + nums[right] < target 会溢出
//                }
//                else if ((long)nums[j] + nums[i] + nums[left] + nums[right] < target)
//                {
//                    i++;
//                }
//                else
//                {
//                    res.push_back(vector<int>{nums[j], nums[i], nums[left], nums[right]});
//                    // 对nums[left]和nums[right]去重
//                    while (j > i && nums[j] == nums[j - 1]) j--;
//                    while (j > i && nums[i] == nums[i + 1]) i++;
//                    // 找到答案时，双指针同时收缩
//                    j--;
//                    i++;
//                }
//            }
//            //去重
//            while (right > left + 3 && nums[right] == nums[right - 1])
//            {
//                right--;
//            }
//            right--;
//        }
//        //去重
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