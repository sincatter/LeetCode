class Solution {
public:
    string addBinary(string a, string b) {
        string res="";
        char tmp='0';
        int index=1;
        while(true){
            int bit_sum=0;
            if(a.size()<index&&b.size()<index&&tmp=='0'){
                break;
            }
            if(a.size()>=index&&a[a.size()-index]=='1')bit_sum++;
            if(b.size()>=index&&b[b.size()-index]=='1')bit_sum++;
            if(tmp=='1')bit_sum++;
            if(bit_sum>1)tmp='1';
            else tmp='0';
            if(bit_sum==1||bit_sum==3)res='1'+res;
            else res='0'+res;
            index++;
        }
        return res;
    }
};