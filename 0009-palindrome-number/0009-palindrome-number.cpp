class Solution {
public:
    bool isPalindrome(int n) {
        bool  is_PAlindrome;
        int last;
        int N=n;
        long long revNum=0;
        while(n>0){
            last=n % 10; // to get the last digit 
            n = n / 10;
            revNum=(revNum*10)+last;   // to get the reverse
        }
        if(revNum == N){
           is_PAlindrome=true;
        }else{
             is_PAlindrome=false;
        }
        return   is_PAlindrome;
    }
};