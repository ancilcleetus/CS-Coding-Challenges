#!/usr/bin/env python3

# Given an integer array nums, return true if any value appears at least 
# twice in the array, and return false if every element is distinct.

# Time Complexity = O(N)
# Space Complexity = O(N)


class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        return len(nums) != len(set(nums))