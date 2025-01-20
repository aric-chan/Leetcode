class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        d = dict()
        for index, number in enumerate (nums) :
            if number in d :
                d[number] += 1
                if d[number] == 2:
                    return True
            else : 
                d[number] = 1
        return False
        # print(d)