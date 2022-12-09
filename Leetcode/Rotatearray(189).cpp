class Solution {
public:
    void rotate(vector<int>& nums, int k) {
  
  //Using vector
//     vector<int> vec(nums.size());
//     for(int i=0;i<nums.size();i++){
//  vec[(i+k)%nums.size()]=nums[i];
//     }
//     nums=vec;
        k = k % nums.size();
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() + k);
       reverse(nums.begin() + k, nums.end());    

    }
};