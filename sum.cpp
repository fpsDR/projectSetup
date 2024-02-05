#include "sum.h"

int sum(const std::vector<int>& numbers) {
    int result = 0;
    for (int num : numbers) {
        result += num;
    }
    return result;
}