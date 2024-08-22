class Solution {
public:
    int findComplement(int num) {
       if(num==0) return 1;
       else if(num==1) return 0;

       int bit=~0;
       while(num & bit){
            bit<<=1;
       } 
       return ~bit & ~num;
    }
};