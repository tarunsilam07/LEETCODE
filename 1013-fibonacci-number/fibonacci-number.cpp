class Solution {
public:
    int f(int n)
    {
        if(n<=1) return n;
        int last=f(n-1);
        int slast=f(n-2);
        return last+slast;
    }
    int fib(int n) {
        int k=f(n);
        return k;
    }
};