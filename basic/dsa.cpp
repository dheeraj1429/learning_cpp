#include <iostream>

void insertionSort(std::vector<int>& nums) {
    for (int i = {1}; i < nums.size(); i++) {
        int current = nums[i];
        int previousIdx = i - 1;

        while (previousIdx >= 0 && nums[previousIdx] > current) {
            nums[previousIdx + 1] = nums[previousIdx];
            previousIdx--;
        }

        nums[previousIdx + 1] = current;
    }
}

void printNumbers(std::vector<int>& nums) {
    for (int i = {0}; i < nums.size(); i++) {
        std::cout << nums[i] << std::endl;
    }
}

int main() {
    std::vector<int> nums = {4, 1, 5, 2, 3};
    insertionSort(nums);
    printNumbers(nums);

    return 0;
}