class Solution {
public:
bool isVowel(char c)
        {
            c=tolower(static_cast<unsigned char>(c));
            return c == 'a' || c == 'e' || c =='i' || c == 'o' || c == 'u';
        }
    string reverseVowels(string s) {
        int left=0,right=s.size() -1;
        while(left < right)
        {
            while(left < right && !isVowel(s[left])) left++;
            while(left < right && !isVowel(s[right])) right--;
            if(left < right)
            {
                swap(s[left],s[right]);
                right--;
                left++;
            }
        }
        return s;
        

        
    }
    
};
