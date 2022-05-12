//simple array
class Solution {
    public int[] twoSum(int[] nums, int target) {
        
        // int[] returnVal = new int[]{0};
        
         for (int i = 0; i < nums.length; i++) {
            for (int j = i + 1; j < nums.length; j++) {
                if (nums[i] + nums[j] == target) {
                    //returnVal.add(i);
                    //returnVal.add(j); //not available coz it's not ArrayList
                    return new int[]{i, j};
                }
            }
        }
        return new int[]{};
    }
}

//using hashMap
class Solution {
    public int[] twoSum(int[] nums, int target) {
        Map<Integer, Integer> map = new HashMap<>();
        
        for(int i = 0; i < nums.length; i++) {
            if(map.containsKey(nums[i]))
                return new int[]{map.get(nums[i]), i};
            else
                map.put(target - nums[i], i);
        }
        return null;
    }
}