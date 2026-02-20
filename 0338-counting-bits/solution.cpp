class Solution {
public:
int counting(int a)
{
    int count=0;
    while(a)
    {
        a=a&(a-1);
        count++;
    }
    return count;
}
    vector<int> countBits(int n) {
        vector<int>res;
        for(int i=0;i <= n;i++)
        {
            res.push_back(counting(i));
        }
        return res;
        
    }
};
