class Solution {
public:
    bool checkDistances(string s, vector<int>& distance) {
         vector<int> firstSeen(26, -1);
        
        for (int i = 0; i < s.length(); ++i) {
            int charIndex = s[i] - 'a';
            
            if (firstSeen[charIndex] != -1) {
                // Check if the distance between the two same letters is exactly as required
                if (i - firstSeen[charIndex] - 1 != distance[charIndex]) {
                    return false;
                }
            } else {
                // Mark the first occurrence of the letter
                firstSeen[charIndex] = i;
            }
        }
        
        return true;
        
    }
};
