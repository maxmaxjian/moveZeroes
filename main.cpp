#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

class solution {
public:
    void moveZeroes(std::vector<int> & nums) {
	int k = 0;
	// for (int i = 0; i < nums.size();) {
	//     if (nums[i] == 0) {
	// 	i++;
	//     }
	//     else {
	// 	nums[k] = nums[i];
	// 	k++;
	// 	i++;
	//     }
	// }
	for (int i = 0; i < nums.size(); i++) {
	    if (nums[i] != 0) {
		nums[k] = nums[i];
		k++;
	    }
	}
	
	while (k < nums.size()) {
	    nums[k] = 0;
	    k++;
	}
    }
};

int main() {
    std::vector<int> nums{0,1,0,3,12};
    std::cout << "Before moving:\n";
    std::copy(nums.begin(), nums.end(), std::ostream_iterator<int>(std::cout, " "));
    std::cout << std::endl;
    
    solution soln;
    soln.moveZeroes(nums);
    std::cout << "After moving:\n";
    std::copy(nums.begin(), nums.end(), std::ostream_iterator<int>(std::cout, " "));
    std::cout << std::endl;
}
