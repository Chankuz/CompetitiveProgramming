class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        hsh = {}
        for i, num in enumerate(nums):
            complete = target - num
            if complete in hsh:
                return [hsh[complete],i]
            hsh[num] = i
        return []
