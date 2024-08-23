/*
Problem: Longest Substring Without Repeating Characters

Given a string s, find the length of the longest substring without repeating characters.
*/    

class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        //Use map and front back iterators to process characters, calculate size by elements inside map
        
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
