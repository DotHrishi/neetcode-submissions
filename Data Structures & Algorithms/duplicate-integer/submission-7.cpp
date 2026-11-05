class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        map<int,int> mapp;

        for(int i=0;i<nums.size();i++){
            if(mapp[nums[i]]>=1){
                return true;
            } else {
                mapp[nums[i]]=1;
            }
        }

        return false;
    }
};