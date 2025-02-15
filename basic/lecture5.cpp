
#include <iostream>
#include <map>
#include <vector>

std::vector<int> majorityElements(std::vector<int>& nums, int size, int target) {
    int st = 0;
    int end = size - 1;
    std::vector<int> ans;

    while (st < end) {
        int total = nums[st] + nums[end];
        if (total > target) {
            end--;
        } else if (total < target) {
            st++;
        } else {
            ans.push_back(st);
            ans.push_back(end);
            return ans;
        }
    }

    return ans;
}

/**
 * Find the Majority Element:
Given an array of size N, find the majority element (an element that appears more than N/2 times). If there is no such element, return -1.
 */
int findMajorityElementWithNestedLoop(std::vector<int>& nums, int size) {
    for (int val : nums) {
        int fqr = 0;
        for (int elm : nums) {
            if (val == elm) {
                fqr++;
            } else {
                fqr = 1;
            }
        }
        if (fqr > size / 2) {
            return val;
        }
    }

    return -1;
}

int findMajorityElement(std::vector<int>& nums, int size) {
    int mj = size / 2;

    std::sort(nums.begin(), nums.end());

    int fqr = 1, ans = nums[0];

    for (int i = 1; i < size; i++) {
        if (nums[i] == nums[i - 1]) {
            fqr++;
        } else {
            fqr = 1;
            ans = nums[i];
        }

        if (fqr > mj) return ans;
    }

    return -1;
}

int findMajorityElementWithMoore(std::vector<int>& nums, int size) {
    int fqr = 0, ans = 0;

    for (int i = 0; i < size; i++) {
        if (fqr == 0) {
            ans = nums[i];
        }
        if (ans == nums[i]) {
            fqr++;
        } else {
            fqr--;
        }
    }

    return ans;
}

/**
 * Find the Element Appearing Exactly K Times:
 * Given an array and an integer K, check if there is an element that appears exactly K times using a variation of Moore’s algorithm.
 */
int findAppearingKTimes(std::vector<int>& nums, int size, int k) {
    std::sort(nums.begin(), nums.end());

    int count = 1;
    for (int i = 1; i < size; i++) {
        if (nums[i] == nums[i - 1]) {
            count++;
        } else {
            count--;
        }

        if (count == k) {
            return nums[i];
        }
    }
    return -1;
}

int findMajorityElementInMatrix(std::vector<std::vector<int>>& matrix, int N, int M) {
    int totalElements = N * M;
    int fqr = 0, ans = 0;

    for (int i = 0; i < totalElements; i++) {
        int row = (i / M);
        int col = i % M;

        if (fqr == 0) {
            ans = matrix[row][col];
        }

        if (ans == matrix[row][col]) {
            fqr++;
        } else {
            fqr--;
        }
    }

    return ans;
}

int main() {
    return 0;
}