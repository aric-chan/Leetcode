class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        prefix = [1] * len(nums)
        suffix = [1] * len(nums)
        start = 0
        end = len(nums) - 1
        result = [1] * len(nums)
        for _ in range (len(nums) - 1) :
            prefix[start + 1] = prefix[start] * nums[start]
            suffix[end - 1] = suffix[end] * nums[end]
            start += 1
            end -= 1
        for i in range (len(result)) :
            result[i] = prefix[i] * suffix[i]
        return result
        # print("result", result)
        # print("prefix", prefix)
        # print("suffix", suffix)
        