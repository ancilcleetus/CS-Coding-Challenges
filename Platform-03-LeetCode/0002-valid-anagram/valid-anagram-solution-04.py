#!/usr/bin/env python3

# Given two strings s and t, return true if t is an anagram of s, and false otherwise.

# Time Complexity = O(N)
# Space Complexity = O(N)


class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        # Counter is a hashmap with counts as values in an iterable
        return Counter(s) == Counter(t)