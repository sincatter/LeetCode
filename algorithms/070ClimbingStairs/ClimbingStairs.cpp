class Solution {
public:
    map<int,int> routes={};
    int climbStairs(int n) {
        if(routes.find(n)!=routes.end()){
            return routes[n];
        }
        if(n>1){
            int tmp=climbStairs(n-1)+climbStairs(n-2);
            routes[n]=tmp;
            return tmp;
        }else{
            routes[n]=1;
            return 1;
        }
    }
};