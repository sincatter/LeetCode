class Solution {
public:
    string countAndSay(int n) {
        string res="1";
        for(int i=1;i<n;i++){
            char tmp=0x00;
            int num=0;
            string res_tmp="";
            for(int j=0;j<res.size();j++){
                if(tmp==res[j]){
                    num++;
                }else{
                    if(num>0)res_tmp+=to_string(num)+tmp;
                    num=1;
                    tmp=res[j];
                }
            }
            res_tmp+=to_string(num)+tmp;
            res=res_tmp;
        }
        return res;
    }
};