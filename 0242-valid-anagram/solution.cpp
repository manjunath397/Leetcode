class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>f;
        if(s.size() != t.size()) return false;
        for(auto it:s)
        {
            f[it]++;
        }
        for(auto it : t)
        {
            f[it]--;
            if(f[it] == 0) f.erase(it);
        }
        if(f.size() == 0) return true;
        return false;
        
    }
};
