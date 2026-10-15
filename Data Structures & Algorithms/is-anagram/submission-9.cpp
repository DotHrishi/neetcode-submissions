class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int> mapp1;
        map<char,int> mapp2;

        for(int i=0;i<s.size();i++){
            if(mapp1[s[i]]!=0){
                mapp1[s[i]]++;
            } else {
                mapp1[s[i]]=1;
            }
        }

        for(int i=0;i<t.size();i++){
            if(mapp2[t[i]]!=0){
                mapp2[t[i]]++;
            } else {
                mapp2[t[i]]=1;
            }
        }

        return mapp1==mapp2;
    }
};
