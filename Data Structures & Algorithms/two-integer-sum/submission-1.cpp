class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mapp;

        for(int i=0;i<nums.size();i++){
            int diff=target-nums[i];
            if(mapp.find(diff)!=mapp.end()){
                return {mapp[diff],i};
            }
            mapp[nums[i]]=i;
        }
    }
};
