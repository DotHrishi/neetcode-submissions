class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mapp;

        for(string s: strs){
            string temp=s;
            sort(temp.begin(),temp.end());
            mapp[temp].push_back(s);
        }

        vector<vector<string>> ans;
        for(auto x:mapp){
            ans.push_back(x.second);
        }

        return ans;
    }
};
