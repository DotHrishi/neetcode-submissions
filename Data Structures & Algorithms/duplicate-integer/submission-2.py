class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        nums=sorted(nums)
        for i in range(len(nums)):
            if nums[i]==nums[i-1] and len(nums)>1:
                return True
        return False

         