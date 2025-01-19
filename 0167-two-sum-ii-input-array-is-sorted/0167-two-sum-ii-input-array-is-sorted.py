class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:
        result = []
        start_index = 0
        end_index = len(numbers) - 1
        while start_index <= end_index :
            if numbers[start_index] + numbers[end_index] == target :
                result = [start_index + 1, end_index + 1]
                return result
            elif numbers[start_index] + numbers[end_index] > target :
                end_index -= 1
            else :
                start_index += 1
        