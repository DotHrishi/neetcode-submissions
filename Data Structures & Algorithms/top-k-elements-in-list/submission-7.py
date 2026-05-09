class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        freq={}
        ans=[]
        for i in range(len(nums)):
            if nums[i] in freq:
                freq[nums[i]]+=1
            else:
                freq[nums[i]]=1
        
        arr=sorted(freq, key=freq.get, reverse=True)
        return arr[:k]
        
        