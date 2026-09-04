class Solution {
public:
    bool isPalindrome(string s) {
        int first = 0;
        int second = s.size()-1;

        while (first < second)
        {
            while (!isalnum(s[first]))
            {
                first++;
            }
            while (!isalnum(s[second]))
            {
                second--;
            }
            if (first < second && tolower(s[first]) != tolower(s[second]))
            {
                return false;
            }

            first++;
            second--;
        }
        return true;
    }
};
