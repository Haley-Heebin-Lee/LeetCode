class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string> numStr;
        
        for(auto& num: nums) {
            numStr.push_back(to_string(num));
        }//push all string of num to numStr
        
        sort(numStr.begin(), numStr.end(), [](string a, string b) {
            return (a + b) > (b + a);
        });
        //sort string by largest using lambda
        
        string result = "";
        for(auto& number: numStr) {
            result += number;
        }
        
        if(result[0] == '0') {
            return "0";
        }//if result starts with 0, means the number is 0
        
        return result;
    }
};