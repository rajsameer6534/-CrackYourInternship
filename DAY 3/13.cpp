
//LEETCODE 283. Move Zeroes
//Given an array nums, write a function to move all 0's to the end of it    


class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        int j=0;
        while(i<n){
            if(nums[i]!=0){
                swap(nums[j],nums[i]);
            j++;
            }
            i++;
        }
    }
};