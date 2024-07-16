//LEETCODE- 26. Remove Duplicates from Sorted Array
//Given a sorted array nums, remove the duplicates in-place such that each element appear only once and


class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
         int n = nums.size();
        if (n == 0) return 0; // Handle empty array case
        
        int count = 1; // Initialize count of unique elements
        int i = 0; // Initialize index for modified array
        
        for (int j = 1; j < n; j++) { // Loop through the array starting from the second element
            if (nums[j] != nums[i]) { // If current element is different from previous unique element
                count++; // Increment count of unique elements
                nums[++i] = nums[j]; // Update the modified array with the current unique element
            }
        }
        
        return count; // Return count of unique elements
    }
};