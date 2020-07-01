#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
	vector<int> prd_except_self(vector<int> nums) {
		vector<int> ans;
		int prd = 1;
		for (int num: nums) {
			ans.push_back(prd);	
			prd *= num;
		}			
		prd = 1;
		for (int i = nums.size() - 1; i >= 0; i--) {
			ans[i] *= prd;
			prd *= nums[i];
		}
		return ans;
	}
};

int main()
{
	vector<int> nums {1, 2, 3, 4, 5};
	Solution solution;
	vector<int> ans = solution.prd_except_self(nums);
	for (int num: ans)
		cout << num << " ";
	cout << endl;
}
