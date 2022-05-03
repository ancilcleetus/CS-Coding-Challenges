#!/usr/bin/env python3

# Given two strings s and t, return true if t is an anagram of s, and false otherwise.

# Time Complexity = O(N)
# Space Complexity = O(N)


class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s) != len(t):
            return False
        
        count_s = {}
        count_t = {}
        for ch_s, ch_t in zip(s, t):
            count_s[ch_s] = count_s.get(ch_s, 0) + 1
            count_t[ch_t] = count_t.get(ch_t, 0) + 1
        
        for ch_s in s:
            if count_s[ch_s] != count_t.get(ch_s, 0):
                return False
        
        return True