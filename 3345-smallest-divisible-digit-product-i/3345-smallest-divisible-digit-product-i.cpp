class Solution {
public:
    int small(int no,int t){
        int n = no;
        int muld = 1;
        while(n>0){
            int digit = n%10;
            muld *= digit;
            n = n/10;
        }
        if(muld%t == 0) return no;
        return small(no+1,t); 
    }
    int smallestNumber(int n, int t) {
        return small(n,t);
    }
};