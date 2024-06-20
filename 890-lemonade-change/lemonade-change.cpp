class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
     int five=0;
     int ten=0;
     int n=bills.size();
     int i=0;
     while(i<n)
     {
        if(bills[i]==5)
        {
            five=five+1;
        }
        if(bills[i]==10)
        {
            if(five)
            {
                five-=1;
                ten+=1;
            }
            else return false;
        }
        if(bills[i]==20)
        {
            if(five && ten)
            {
                ten-=1;
                five-=1;
            }
            else if(five>=3)
            {
                five-=3;
            }
            else return false;
        }
        i++;
     }   
     return true;
    }
};