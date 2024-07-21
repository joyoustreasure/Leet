class Solution:
    def merge(self, lst1: List[int], lst2: List[int]) -> List[int]:
        i, j = 0, 0
        merged = []

        while i < len(lst1) and j < len(lst2):
            if lst1[i] <= lst2[j]:
                merged.append(lst1[i])
                i += 1
            else:
                merged.append(lst2[j])
                j += 1

        if i < len(lst1):
            merged.extend(lst1[i:])
        if j < len(lst2):
            merged.extend(lst2[j:])

        return merged

    def sortArray(self, nums: List[int]) -> List[int]:
        if len(nums) <= 1:
            return nums
            
        mid = len(nums) // 2
        left_half = self.sortArray(nums[:mid])
        right_half = self.sortArray(nums[mid:])

        return self.merge(left_half, right_half)
