class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==0)
            return 0;
        
        int index=1;
        int size = nums.size();
        
        for(int i=1;i<size;i++)
        {
            if(nums[i]==nums[i-1])
                continue;
            else
            {
                nums[index]=nums[i];
                index++;
            }
        }
        
        for(int i=index; i<size; i++){
            nums.pop_back();
        }//necessary?
        
        return index;
    }
};