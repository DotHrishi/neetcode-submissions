class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int zeros=0;
        int idx=-1;
        int prod=1;

        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                zeros++;
                idx=i;
            } else {
                prod*=nums[i];
            }
        }

        vector<int> ans(nums.size(),0);
        if(zeros==0){
            for(int i=0;i<nums.size();i++){
                ans[i]=prod/nums[i];
            }
        }else if(zeros==1){
            ans[idx]=prod;
        }

        return ans;
    }
};
