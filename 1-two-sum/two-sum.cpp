class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<int> solution = {-1, -1}; 
        int difference; // get difference between the two values and then find the value in vector 
        for(int i = 0; i < nums.size(); i++){
            difference = target - nums[i]; // get difference to find what we are looking for

            // iterate through vector to find the matching value 
            auto find1 = find(nums.begin()+i+1, nums.end(), difference);
            if(find1 != nums.end()){ 
                solution[0] = i;
                solution[1] = find1 - nums.begin();
                
                return solution;
            }

            difference = 0;
        }
        
        return {};
    }
};