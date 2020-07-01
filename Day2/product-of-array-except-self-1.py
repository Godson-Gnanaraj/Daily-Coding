class Solution:
    def prd_except_self(self, nums):
        ans = []
        prd = 1
        for num in nums:
            ans.append(prd)
            prd *= num

        prd = 1
        for i in range(len(nums) - 1, -1, -1):
            ans[i] *= prd
            prd *= nums[i]

        return ans


def main():
    nums = [1, 2, 3, 4, 5]
    solution = Solution()
    ans = solution.prd_except_self(nums)
    print(ans)


if __name__ == "__main__":
    main()
