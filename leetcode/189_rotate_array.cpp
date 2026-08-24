#include <vector>

using namespace std;

class Solution {
public:
	void rotate(vector<int>& nums, int k) {
		vector<int> v; 
		int s = k % nums.size(); 

		for(size_t i = nums.size()-s; i < nums.size(); ++i) {
			v.push_back(nums[i]); 
		}

		for(size_t i = 0; i < nums.size()-s; ++i) {
			v.push_back(nums[i]);	
		}

		nums = v; 
		
	}
};
