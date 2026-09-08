class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        map<int,int> mapp;
        int n=numbers.size();

        for(int i=0;i<n;i++){
            int diff=target-numbers[i];
            if(mapp.find(diff)!=mapp.end()){
                return {mapp[diff]+1,i+1};
            }
            mapp[numbers[i]]=i;
        }
        return {0,0};
    }
};
