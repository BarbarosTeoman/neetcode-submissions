class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.size() == 0) return 0;

        sort(nums.begin(), nums.end());

        int res = 1;
        int maxRes = 1;

        for (int i = 0; i < nums.size()-1; ++i)
        {
            if (nums[i+1] == nums[i])
            {
                continue;
            } else if (nums[i+1] - nums[i] == 1)
            {
                res++;
                if (res > maxRes) maxRes = res;
            } else
            {
                res = 1;
            }
        }
        return maxRes;
    }  
};
