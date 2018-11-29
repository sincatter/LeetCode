class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int res=0;
        if(prices.size()<2)return 0;
        int start_index=0;
        int end_index=0;
        for(int i=1;i<prices.size();i++){
            if(prices[i]<prices[start_index]){
                start_index=end_index=i;
                continue;
            }else{
                res=max(res,prices[i]-prices[start_index]);
            }
        }
        return res;
    }
};