class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> s(nums.begin(),nums.end());
        priority_queue<int,vector<int>,greater<int>>pq;
        for(auto it:s)
        {
            pq.push(it);
            if(pq.size()>3)
            {
                pq.pop();
            }
            
        }
        if(pq.size()<3)
        {
            while(pq.size()>1)
            {
                pq.pop();
            }
            
        }
        
        return pq.top();
        
    }
};
