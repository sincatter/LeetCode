class Solution {
public:
    int strStr(string haystack, string needle) {
        if(haystack.length()<needle.length())return -1;
        if(haystack.length()==0&&needle.length()==0)return 0;
        for(int i=0;i<haystack.length()-needle.length()+1;i++){
            int j=0;
            for(;j<needle.length();j++){
                if(haystack[i+j]==needle[j]){
                    continue;
                }else{
                    break;
                }
            }
            if(j==needle.length())return i;
        }
        return -1;
    }
};