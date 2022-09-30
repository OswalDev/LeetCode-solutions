/*
Bruteforce solution

Used a double for loop for comparing each element with any other inside
of the array and checked if their add up equals to the target


*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        int size = nums.size();
        for(int i=0 ; i < size-1 ; i++) 
        {
            for(int j=i+1 ; j < size ; j++)
            {
                if(nums[i] + nums[j] ==  target)
                {
                    result.push_back(i);
                    result.push_back(j);
                    return result; //array with the correct answer will be return
                }
            }
        }
        return (result);
    }
};