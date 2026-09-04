class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> ret;

        if (n < 3) return ret;

        sort(nums.begin(), nums.end());

        for (int i = 0; i < n - 2; i++)
        {
            if (nums[i] > 0) break;

            if (i > 0 && nums[i] == nums[i - 1]) continue;

            int target = -nums[i];
            int first = i + 1;
            int second = n - 1;

            while (first < second)
            {
                int sum = nums[first] + nums[second];

                if (sum == target)
                {
                    ret.push_back({nums[i], nums[first], nums[second]});

                    first++;
                    second--;

                    while (first < second && nums[first] == nums[first - 1]) first++;
                    while (first < second && nums[second] == nums[second + 1]) second--;
                }
                else if (sum < target)
                {
                    first++;
                }
                else
                {
                    second--;
                }
            }
        }
        return ret;
    }
};