class Solution {
public:
bool isVowel(char c)
{
    c=tolower(static_cast<unsigned char>(c));
    return c=='a' || c=='e' || c=='i' || c=='o' || c=='u';  
}

    string sortVowels(string s) {
        vector<char> vowels;
        for(auto it: s)
        {
            if(isVowel(it))
            {
                vowels.push_back(it);
            }
        }
        sort(vowels.begin(),vowels.end());
        int n=s.size(),m=vowels.size(),i=0,j=0;
        while(j<m)
        {
            if(isVowel(s[i]))
            {
                s[i] = vowels[j];
                j++;
            }
            i++;
        }
        return s;
        
    }
};
