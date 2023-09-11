class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
        n1, n2 = len(nums1), len(nums2)
        if n1 < n2: return self.findMedianSortedArrays(nums2, nums1)
        nums1 += [float('inf'), float('-inf')]
        nums2 += [float('inf'), float('-inf')]
        left, right = 0, 2 * n2
        while left <= right:
            mid2 = left + (right - left) // 2
            mid1 = n1 + n2 - mid2
            L1, R1 = nums1[(mid1-1) // 2], nums1[mid1 // 2]
            L2, R2 = nums2[(mid2-1) // 2], nums2[mid2 // 2]
            if L1 > R2:
                left = mid2 + 1
            elif L2 > R1:
                right = mid2 - 1
            else:
                return (max(L1, L2) + min(R1, R2)) / 2