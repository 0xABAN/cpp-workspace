#include <unordered_set>
#include <iostream> 
#include <vector> 

using namespace std; 

class Solution { 
public:
	int singleNumber(vector<int>& nums) { 
		std::unordered_set<int> seen; 

		for (int x : nums) {
			if (seen.contains(x)) { 
				seen.erase(x);
			} else { 
				seen.insert(x);
			}
		}
		return *seen.begin(); 
	}
};
