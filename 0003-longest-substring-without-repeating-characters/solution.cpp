class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> window;
        int left = 0, maxLen = 0;

        for (int right = 0; right < s.size(); right++) {
            // If s[right] already exists in window, move left until it's removed
            while (window.find(s[right]) != window.end()) {
                window.erase(s[left]);
                left++;
            }

            // Add current character to window
            window.insert(s[right]);

            // Update max length (right-left+1 = window size)
            maxLen = max(maxLen, right - left + 1);
        }

        return maxLen;
    }
};

