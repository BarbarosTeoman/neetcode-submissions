#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    // Encodes a list of strings to a single string.
    string encode(vector<string>& strs) {
        string ret;
        for (const string& str : strs) {
            ret += to_string(str.length()) + "#" + str;
        }
        return ret;
    }

    // Decodes a single string to a list of strings.
    vector<string> decode(string s) {
        vector<string> words;
        int i = 0;
        int n = s.length();

        while (i < n) {
            int slashPos = s.find('#', i);
            int len = stoi(s.substr(i, slashPos - i));
            
            words.push_back(s.substr(slashPos + 1, len));
            
            i = slashPos + 1 + len;
        }

        return words;
    }
};
