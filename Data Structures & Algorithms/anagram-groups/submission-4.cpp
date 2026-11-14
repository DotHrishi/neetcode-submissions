class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mapp;

        for(auto s:strs){
            string temp=s;
            sort(temp.begin(),temp.end());
            mapp[temp].push_back(s);
        }

        vector<vector<string>> ans;
        for(auto j:mapp){
            ans.push_back(j.second);
        }

        return ans;
    }
};
