class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_n=INT_MIN;
        int tmp_n=0;
        int max_tmp=0;
        while(tmp_n<nums.size()){
            max_tmp+=nums[tmp_n];
            if(max_tmp>max_n){
                max_n=max_tmp;
            }
            if(max_tmp<0){
                max_tmp=0;
            }
            tmp_n++;
        }
        return max_n;
    }
};