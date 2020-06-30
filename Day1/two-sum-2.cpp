#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
	bool twoSum(vector<int> nums, int k) {
		unordered_set<int> numset;
		for (int num: nums) {
			if (numset.find(k - num) == numset.end())
				return true;
			else
				numset.insert(num);
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
