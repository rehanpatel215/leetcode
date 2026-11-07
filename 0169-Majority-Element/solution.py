class Solution(object):
    def majorityElement(self, nums):
        h = {}
        for num in nums:
            h[num] = h.get(num, 0) + 1
        for num in h:
            if h[num] > len(nums) // 2:
                return num