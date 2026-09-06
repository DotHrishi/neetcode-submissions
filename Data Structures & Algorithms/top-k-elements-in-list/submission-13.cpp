class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> mapp;
        for(int i=0;i<nums.size();i++){
            mapp[nums[i]]++;
        }

        vector<pair<int, int>> freq;
        for(auto x:mapp){
            freq.push_back({x.second,x.first});
        }

        sort(freq.rbegin(),freq.rend());
        vector<int> x;
        for(int i=0;i<k;i++){
            x.push_back(freq[i].second);
        }

        return x;
    }
};
