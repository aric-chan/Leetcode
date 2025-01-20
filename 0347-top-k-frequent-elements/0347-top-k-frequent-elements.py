class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        d = defaultdict(int)
        myHeap = []
        result = []
        if len(nums) == 1 :
            return nums
        if len(nums) == 0 :
            return []
        for index, num in enumerate (nums) :
            d[num] += 1
        # print(d)
        for key, freq in d.items():
            heapq.heappush(myHeap, (freq,key))
            if len(myHeap) > k:
                heapq.heappop(myHeap)
        # print(myHeap)
        for key, value in myHeap:
            result.append(value)
        # print(result)
        return result
        