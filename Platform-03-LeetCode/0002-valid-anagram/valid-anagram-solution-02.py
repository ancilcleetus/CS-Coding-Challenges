#!/usr/bin/env python3

# Given two strings s and t, return true if t is an anagram of s, and false otherwise.

# Time Complexity = O(N)
# Space Complexity = O(N)


class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if(len(s)!=len(t)):
            return False
        remove_dup = set(s)
        for c in remove_dup:
            if s.count(c) != t.count(c):
                return False
                
        return True