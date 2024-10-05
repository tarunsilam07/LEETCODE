class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.size();
        if (n == 0) return 0;   
        unordered_map<char, int> count;  
        int maxCount = 0;  
        int maxLen = 0;    
        int left = 0;      
        for (int right = 0; right < n; ++right) {
            count[s[right]]++;  
            maxCount = max(maxCount, count[s[right]]);  

            if ((right - left + 1) - maxCount > k) {
                count[s[left]]--;  
                left++;
            }
            maxLen = max(maxLen, right - left + 1); 
        }
        return maxLen;
    }
};
