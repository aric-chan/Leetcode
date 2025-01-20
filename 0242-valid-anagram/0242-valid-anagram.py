class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        word = dict()
        if len(s) != len(t) :
            return False
        for char in s :
            word[char] = word.get(char, 0) + 1
        for char in t :
            if char not in word or word[char] == 0:
                return False
            word[char] -= 1
        return True
        