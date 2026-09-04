class Solution {
public:
    int maxArea(vector<int>& heights) {
        int max_area = -1;
        int n = heights.size();
        int left = 0;
        int right = n-1;

        while (left < right)
        {
            int area = (right-left)*min(heights[left], heights[right]);

            if (area > max_area) max_area = area;

            if (heights[left] < heights[right])
            {
                left++;
            } else {
                right--;
            }
        }
        return max_area;
    }
};
