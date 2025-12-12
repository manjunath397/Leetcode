class Solution {
public:
    string removeDigit(string number, char digit) {
        string best="";
        for(int i=0;i<number.size();i++)
        {
            if(number[i]==digit)
            {
                string a=number.substr(0,i)+number.substr(i+1);
                
                if(a>best)
                {
                    best=a;
                } 
                
            }
           
        }
        return best;
        
    }
};
