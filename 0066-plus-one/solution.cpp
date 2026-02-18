class Solution {
public:
    void reverse(vector<int>& digits)
    {
        int left=0,right=digits.size()-1;
        while(left < right)
        {
            swap(digits[left],digits[right]);
            right--;
            left++;
        }
    }
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
        int carry=1;
        for(int i=n-1;i>= 0;i--)
        {
            int sum=digits[i]+carry;
            carry=sum/10;
            digits[i]=sum % 10;
            
        }
        if(carry)
        {
            digits.push_back(carry);
            reverse(digits);
        }
         
         return digits;
        
    }
};
