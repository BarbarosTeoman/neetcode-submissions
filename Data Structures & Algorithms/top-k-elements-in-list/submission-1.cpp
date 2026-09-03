#include <vector>
#include <unordered_map>

class Solution {
public:
    std::vector<int> topKFrequent(std::vector<int>& nums, int k) {
        std::unordered_map<int, int> frequency;
        for (int num : nums) {
            frequency[num]++;
        }

        std::vector<int> result;

        for (int step = 0; step < k; ++step) {
            int maxFreq = -1;
            int bestKey = 0;

            for (const auto& [num, count] : frequency) {
                if (count > maxFreq) {
                    maxFreq = count;
                    bestKey = num;
                }
            }

            result.push_back(bestKey);
            frequency[bestKey] = -1;
        }

        return result;
    }
};
