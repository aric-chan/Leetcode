class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        word = dict()
        if len(s) != len(t) :
            return False
        for index, character in enumerate (s) :
            if character in word : 
                word[character] += 1
            else :
                word[character] = 1
        for index, character in enumerate (t) :
            if character in word : 
                word[character] -= 1
            else :
                return False
        for k, v in word.items() :
            if v != 0 : 
                return False
        return True
        