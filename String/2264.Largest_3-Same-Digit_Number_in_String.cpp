class Solution {
public:
    string largestGoodInteger(string num) {
        string ans;
        for (int i = 2; i < num.size(); i++) {
            if (num[i] == num[i - 1] && num[i - 2] == num[i]) {
                ans = max(ans, string(3, num[i]));
            }
        }
        return ans;
    }
};