class Solution {
public:
    bool isPalindrome(string s) {
        int first = 0;
        int second = s.size()-1;

        while (first < second)
        {
            while (first < second && !isalnum(s[first]))
            {
                first++;
            }
            while (first < second && !isalnum(s[second]))
            {
                second--;
            }
            if (tolower(s[first]) != tolower(s[second]))
            {
                return false;
            }

            first++;
            second--;
        }
        return true;
    }
};
