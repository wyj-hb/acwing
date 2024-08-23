#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> nums{1,3,1,2,0,5};
    int k = 3;
    deque<int> q;
    vector<int> res;
    for(int i = 0;i<nums.size();i++)
    {
        while(!q.empty() && nums[i] > nums[q.back()])
        {
            q.pop_back();
        }
        q.push_back(i);
        //出队
        int d = q.front();
        if(d < i - k + 1 && i+1 >=k)
        {
            //滑出
            q.pop_front();
        }
        d = q.front();
        if(i +1>=k)
        {
            res.push_back(nums[d]);
        }
    }
    for(auto c : res) {
        printf("%d ",c);
    }
    return 0;
}