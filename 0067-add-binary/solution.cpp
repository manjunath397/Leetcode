class Solution {
public:
    string addBinary(string a, string b) {
        int i=a.length()-1;
        int j=b.length()-1;
        int carry=0;
        string res="";
        while(i >= 0 || j >= 0 || carry != 0)
        {
            int bit_a=0;
            int bit_b=0;
            if(i >=0)
            {
                bit_a=a[i] -'0';
                i--;
            }
            if(j >= 0)
            {
                bit_b=b[j]-'0';
                j--;
            }
            int sum=bit_a+bit_b+carry;
            res+=(sum%2) + '0';
            carry=sum/2;
        }
        reverse(res.begin(),res.end());
        return res;
        
    }
};
