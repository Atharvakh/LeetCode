class Solution:
    def threeSumClosest(self, nums: List[int], target: int) -> int:
        # n = len(nums)
        # min_diff = float('inf')
        # for i in range(n-2):
        #     for j in range(n-1):
        #         for k in range(n):
        #             curr_sum = nums[i]+nums[j]+nums[k]
        #             if(abs(curr_sum-target)<min_diff):
        #                 min_diff = curr_sum-target 
        #                 close_sum = curr_sum

        # return close_sum

        nums.sort()
        n = len(nums)
        min_diff=float('inf')
        close_sum=float('inf')
        for i in range(n-2):
            left = i+1
            right = n-1
            while(left<right):
                curr_sum = nums[i]+nums[left]+nums[right]
                diff=abs(target-curr_sum)
                if(diff<min_diff):
                    min_diff=diff
                    close_sum = curr_sum
                if (curr_sum < target):
                    left += 1
                else:
                    right -= 1

        return close_sum