class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        map<int,int> freq;
        for(auto x:nums){
            if(freq[x]!=0){
                return true;
            }
            freq[x]++;
        }
        return false;
    }
};