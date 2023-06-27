/*
Running Sum of 1d Array
Given an array nums. We define a running sum of an array as runningSum[i] = sum(nums[0]…nums[i]).
Return the running sum of nums.
*/

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
    int i,j,k;
    int count = nums.size();
    cout << count;


    vector<int> runningSum(count);
   
    for (j = 0; j<= count-1 ; j++) {
        int m = 0;
        for (k=0; k<=j; k++)
            m = m + nums[k];
        runningSum[j] = m;
    }        
           
    return runningSum;
    }
};
