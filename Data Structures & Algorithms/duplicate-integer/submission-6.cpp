class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        map<int,int> mapp;
        for(int i=0;i<nums.size();i++){
            if(mapp[nums[i]]!=0){
                mapp[nums[i]]++;
            } else {
                mapp[nums[i]]=1;
            }
        }

        for(auto x:mapp){
            if(x.second>1){
                return true;
            }
        }
        return false;
    }
};