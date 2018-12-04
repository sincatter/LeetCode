class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> numsMap={};
        for(int i=0;i<nums.size();i++){
            if(numsMap.find(target-nums[i])!=numsMap.end()){
                return vector<int>{numsMap.find(target-nums[i])->second,i};
            }
            numsMap[nums[i]]=i;
        }
    }
};