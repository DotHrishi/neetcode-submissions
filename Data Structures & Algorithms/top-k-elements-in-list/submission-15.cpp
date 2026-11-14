class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mapp;

        for(auto x:nums){
            mapp[x]++;
        }

        vector<pair<int, int>> freq;
        for(auto y:mapp){
            freq.push_back({y.second, y.first});
        }
        sort(freq.rbegin(), freq.rend());

        vector<int> ans;
        for(int i = 0; i < k; i++){
            ans.push_back(freq[i].second);
        }

        return ans;
    }
};