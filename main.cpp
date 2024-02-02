#include <iostream>
#include <vector>

// Define the sum function
int sum(const std::vector<int>& numbers) {
    int result = 0;
    for (int num : numbers) {
        result += num;
    }
    return result;
}

int main() {
    // Test the sum function
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    int result = sum(numbers);
    std::cout << "Sum of numbers:  " << result << std::endl;

    return 0;
}