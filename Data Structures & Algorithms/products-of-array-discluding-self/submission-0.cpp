class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();

        vector<int> prefix(n); 
        vector<int> suffix(n); 
        vector<int> products(n);

        for (int i = 0; i < n; ++i)
        {
            if (i == 0)
            {
                prefix[i] = 1;
                continue;
            }
            prefix[i] = prefix[i - 1] * nums[i - 1];
        }

        for (int j = n - 1; j >= 0; --j)
        {
            if (j == n - 1)
            {
                suffix[j] = 1;
                continue;
            }
            suffix[j] = suffix[j + 1] * nums[j + 1];
        }

        for (int k = 0; k < n; ++k)
        {
            products[k] = prefix[k] * suffix[k];
        }

        return products;
    }
};
