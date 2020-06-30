#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
	bool twoSum(vector<int> nums, int k) {
		sort(nums.begin(), nums.end());

		int start = 0, end = nums.size() - 1;
		while (start < end) {
			int sum_val = nums[start] + nums[end];
			if (sum_val == k)
				return true;
			else if (sum_val > k)
				end--;
			else
				start++;
		}
		return false;
	}
};

int main()
{
	vector<int> nums = {10, 15, 3, 7};
	int k = 17;
	Solution solution;
	bool ans = solution.twoSum(nums, k);
	cout << (ans ? "true": "false") << endl;
}
