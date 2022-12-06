#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        sort(begin(nums), end(nums));
        int start = 0;
        int end = nums.size()-1;
        for(int i = 0; i < nums.size(); ++i){
            int sum = nums[start] + nums[end];
            if(sum == target){
                vector<int> ans{start, end};
                return ans;
            }else if(target < sum){
                end--;
            }else{
                start++;
            }
        }
        return {0};
    }
};
