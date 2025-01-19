class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        result = []
        start_index = 0
        end_index = len(nums) - 1
        d = dict()
        for index, num in enumerate(nums):
            if num in d :
                result.append(index)
                result.append(d[num])
                return result
            d[target - num] = index

