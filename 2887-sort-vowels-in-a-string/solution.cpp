class Solution {
public:
bool isVowel(char c)
{
    c=tolower(static_cast<unsigned char>(c));
    return c== 'a' || c== 'e' || c== 'i' || c== 'o' || c== 'u';
}
    string sortVowels(string s) {
        vector<char> vowel;
        for(auto it : s)
        {
            if(isVowel(it))
            {
                vowel.push_back(it);
            }
        }
        sort(vowel.begin(),vowel.end());
        int n=s.size();
        int m=vowel.size();
        int i=0,j=0;
        while(j<m)
        {
            if(isVowel(s[i]))
            {
                s[i] = vowel[j];
                i++;
                j++;
            }
            else
            {
                i++;
            }
        }
        return s;
        
    }
};
