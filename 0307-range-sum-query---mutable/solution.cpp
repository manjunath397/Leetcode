class NumArray {
public:
vector<int>bit;
vector<int>arr;
int n;
    NumArray(vector<int>& nums) {
        n=nums.size();
        bit.resize(n+1,0);
        arr=nums;
        for(int i=0;i<n;i++)
        {
            add(i+1,arr[i]);
        }
        

        
    }
    void add(int index,int delta)
    {
        while(index<=n)
        {
            bit[index]+=delta;
            index+=(index&-index);
        }
    }
    int prefixsum(int index)
    {
        int sum=0;
        while(index > 0)
        {
            sum+=bit[index];
            index-=(index&-index);
        }
        return sum;
    }
    
    void update(int index, int val) {
        int delta=val-arr[index];
        arr[index]=val;
        add(index+1,delta);
        
        
    }
    
    int sumRange(int left, int right) {
        return prefixsum(right+1)-prefixsum(left);
        
        
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(index,val);
 * int param_2 = obj->sumRange(left,right);
 */
