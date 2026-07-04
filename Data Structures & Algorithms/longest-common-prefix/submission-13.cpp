class Solution {
   public:
    string longestCommonPrefix(vector<string>& strs) {
        string res = "";
        if (strs.size() == 1) {
            return strs[0];
        }
        for (int i = 0; i < strs[0].size(); i++) {
            char current = strs[0][i];
            for (int j = 1; j < strs.size(); j++) {
                if (current != strs[j][i]) {
                    return res;
                }
            }
            res += strs[0][i];
        }
        return res;
    }
};