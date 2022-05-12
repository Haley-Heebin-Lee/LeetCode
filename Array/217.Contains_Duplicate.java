//simple loop
class Solution {
    public boolean containsDuplicate(int[] nums) {
        for (int i = 0;i < nums.length; i++)
            for (int j = i+1; j < nums.length; j++)
                if (j!=i && nums[j] == nums[i])
                    return true;
        
        return false;
    }
}

//using hash table
class Solution {
	public boolean containsDuplicate(int[] nums) {
		set<Intager> set = new HashSet<>(nums.length);
		for(int num: nums) {
			if(set.contains(num))
				return true;
			set.add(num);
		}
		return false;
	}
}
