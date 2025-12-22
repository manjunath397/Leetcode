class Solution {
public:
int rev(int a,int b,vector<int>&arr)
{
    int i=a;
    int j=b;
    while(i<=j)
    {
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        j--;
        i++;
    }
    return 1;
}
    void rotate(vector<int>& nums, int k) {
        
        int n=nums.size();
        if(k>=n) k=k%n;
        rev(0,n-k-1,nums);
        rev(n-k,n-1,nums);
        rev(0,n-1,nums);
    }
};
