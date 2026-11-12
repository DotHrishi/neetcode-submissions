class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int> mapp1;
        for(int i=0;i<s.size();i++){
            mapp1[s[i]]++;
        }

        map<char,int> mapp2;
        for(int j=0;j<t.size();j++){
            mapp2[t[j]]++;
        }

        return mapp1==mapp2;
    }
};
