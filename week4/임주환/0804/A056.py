class Solution:
    def nextGreaterElement(self, nums1: List[int], nums2: List[int]) -> List[int]:
        answer = []
        for i in range(len(nums1)):
            flag = False
            for j in range(len(nums2)):
                if nums1[i] == nums2[j]:
                    flag = True

                if flag and nums1[i] < nums2[j]:
                    answer.append(nums2[j])
                    break
            if len(answer) <= i:
                answer.append(-1)
        
        return answer