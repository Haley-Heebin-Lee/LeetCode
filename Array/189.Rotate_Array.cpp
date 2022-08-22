class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        for(int i=0; i<k; i++){
            int temp = nums.back();
            nums.pop_back();
            nums.insert(nums.begin(), temp);
        }
    }
};// time limit exceed

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int size = nums.size();
        vector<int> temp(size);
        for(int i=0; i< size; i++){
            int index = (i+k)%size; //3%7 = 3 , 4, 5, 6, 0, 1, 2
            temp[index] = nums[i]; 
        }
        nums = temp;
    }
};
//temp[3] = 1
//temp[4] = 2
//temp[5] = 3
//temp[6] = 4
//temp[0] = 5, 6, 7

//queue is also available with n-k