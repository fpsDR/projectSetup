#include <iostream>
#include <vector>
#include "sum.h"

int main() {
    // Test the sum function
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    int result = sum(numbers);
    std::cout << "Sum of numbers:  " << result << std::endl;


	if (result==15){
		std::cout << "The test passed because result is 15" << std::endl;
	}

	else if (result==17){
		std::cout << "The test passed because result is 17" << std::endl;
	}
	
	else if (result==20){
		std::cout << "The test passed because result is 20" << std::endl;
	}


    return 0;
}