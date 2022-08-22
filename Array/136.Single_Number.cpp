class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end()); //11224
        for(int i=1; i<nums.size(); i+=2){
            if(nums[i] != nums[i-1]) //11 22 
                return nums[i-1];
        }
        return nums[nums.size()-1];
    }
};//O(nLogN) due to sort


//using xor
class Solution {
public:
    int singleNumber(vector<int>& nums) {
	    int ans=0;
	    for(auto x:nums)
	        ans^=x;
	    return ans;
    }
};