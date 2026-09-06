class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;
        
        map<char, int> map1;
        for(int i=0;i<s.size();i++){
            map1[s[i]]++;
        }

        map<char, int> map2;
        for(int i=0;i<t.size();i++){
            map2[t[i]]++;
        }

        return map1==map2;
    }
};
