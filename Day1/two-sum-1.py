# Two pointer approach

class Solution:
    def two_sum(self, nums, k):
        nums.sort()
        start, end = 0, len(nums) - 1
        while start < end:
            sum_val = nums[start] + nums[end]
            if sum_val == k:
                return True
            elif sum_val > k:
                end -= 1
            else:
                start += 1
        return False


def main():
    nums = [10, 15, 3, 7]
    k = 17
    solution = Solution()
    ans = solution.two_sum(nums, k)
    print(ans)


if __name__ == "__main__":
    main()
