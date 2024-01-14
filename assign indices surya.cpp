#include <iostream>
#include <vector>
#include <limits>

std::vector<int> twoSum(std::vector<int>& nums, int target) {
    // Iterate over the array to find two numbers that add up to the target
    for (int i = 0; i < nums.size(); ++i) {
        for (int j = i + 1; j < nums.size(); ++j) {
            // Check if the current pair of numbers equals the target
            if (nums[i] + nums[j] == target) {
                // Return their indices
                return {i, j};
            }
        }
    }
    // Return an empty vector if no pair is found
    return {};
}

int main() {
    int n, target;
    std::cout << "Enter number of elements in the array : ";
    std::cin >> n;

    // Validate the size of the array
    if (n < 2 || n > 10000) {
        std::cout << "Invalid number of elements." << std::endl;
        return 1;
    }

    std::vector<int> nums(n);
    std::cout << "Enter " << n << " integers:\n";
    for (int i = 0; i < n; ++i) {
        std::cin >> nums[i];
        // Validate each element in the array
        if (nums[i] < -1000000000 || nums[i] > 1000000000) {
            std::cout << "Invalid input for array element." << std::endl;
            return 1;
        }
    }

    std::cout << "Enter target sum : ";
    std::cin >> target;

    // Validate the target sum
    if (target < -1000000000 || target > 1000000000) {
        std::cout << "Invalid target sum." << std::endl;
        return 1;
    }

    std::vector<int> indices = twoSum(nums, target);

    // Check if a valid pair was found
    if (!indices.empty()) {
        std::cout << "Indices: [" << indices[0] << "," << indices[1] << "]\n";
    } else {
        std::cout << "No solution found.\n";
    }

    return 0;
}
