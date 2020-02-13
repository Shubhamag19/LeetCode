class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        dictionary = {}
        for i, value in enumerate(nums):
            n = target-value
            if n not in dictionary:
                dictionary[value] = i
            else:
                return [dictionary[n],i]
