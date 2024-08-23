class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        std::unordered_map<char, int> chars;
        int front = 0, back = 0;
        int maxSize = 0;

        while(front != s.length() && back != s.length()) {
            if(chars.find(s[front]) == chars.end()) {
                chars[s[front]] += 1;
                front++;
                maxSize = (chars.size() > maxSize) ? chars.size() : maxSize;
            }
            else {
                chars.erase(s[back]);
                back++;
            }
        }

        return maxSize;
    }
};
