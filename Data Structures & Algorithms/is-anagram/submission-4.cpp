class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int> freq;
        for(auto x:s){
            freq[x]++;
        }

        map<char,int> freq2;
        for(auto y:t){
            freq2[y]++;
        }

        return freq==freq2;
    }
};
