class Solution {
public:
    int mySqrt(int x) {
        int left=0;
        int right=x;
        while(right-left>1){
            int tmp=(left+right)/2;
            if(tmp>x/tmp){
                right=tmp;
            }else{
                left=tmp;
            }
        }
        return right*right==x?right:left;
    }
};