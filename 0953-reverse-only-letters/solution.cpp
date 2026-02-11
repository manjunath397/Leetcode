class Solution {
public:
    string reverseOnlyLetters(string s) {
        int n=s.length();
        int i=0,j=n-1;
        while(i < j)
        {
            while(i<n && !isalpha(static_cast<unsigned char>(s[i]))) i++;
            while(j> 0 && !isalpha(static_cast<unsigned char>(s[j]))) j--;
            if(i >= j) break;
            swap(s[i],s[j]);
            i++;
            j--;
        }
        return s;
        
    }
};
