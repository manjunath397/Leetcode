class Solution {
public:
    string reversePrefix(string word, char ch) {
        int j=0;
        int n=word.length();
        while( j<n&& word[j] != ch)
        {
           
            j++;
        }
         if(j >= n) return word;
        int i=0;
        while(i < j)
        {
            swap(word[i],word[j]);
            i++;
            j--;
        }
        return word;
        
    }
};
