class Solution {
public:
    bool check(vector<int>& nums) {

        if(nums.size()==1||nums.size()==2){
            return true;
        }
       int k=0;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]>nums[i+1]){
                k++;
            }
            else if(k>=2){
                break;
            }
        }
        if(nums[nums.size()-1]>nums[0]){
            k++;
        }
        if(k>1){
            return false;
        }
        else{
            return true;
        }
    }
};