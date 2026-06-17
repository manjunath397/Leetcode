class Solution {
public:
    bool canMeasureWater(int x, int y, int target) {
        if(target > x+y) return false;
        if(target == 0) return true;
        int g=gcd(x,y);
       return target % g ==0;
        
    }
    int gcd(int x,int y)
    {
        while(y != 0)
        {
            int rem=x%y;
            x=y;
            y=rem;
        }
        return x;
    }
};
