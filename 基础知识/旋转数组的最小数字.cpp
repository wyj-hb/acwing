class Solution {
public:
    int findMin(vector<int>& nums) {
        if(nums.size() == 0)
        {
            return -1;
        }
        int min = 1000000;
        for(auto c :nums)
        {
            min = min > c ? c : min;
            // printf("%d   %d\n",c,min);
        }
        return min;
    }
};