class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        mp={}
        for i in range(len(nums)):
            current =nums[i]
            required =target -current;
            if required in mp:
                return [mp[required],i]
            mp[current]=i;
        return [-1,-1]    
        

        // python code 
        