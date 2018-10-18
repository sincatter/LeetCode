class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==0)return 0;
        int index=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i]>nums[index]){
                swap(nums[i],nums[index+1]);
                index+=1;
            }
        }
        return index+1;
    }
};