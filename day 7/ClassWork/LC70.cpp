class Solution {
public:
    int climbStairs(int n) {
        if (n==1 ||n==2) return n;
        return climbStairs(n-1)+climbStairs(n-2);
        // solve by fabonacci series 
    }
};
//-------------------------------------------------------------------

// logic 

// f(n)
// f(n-1)+f(n-2) f(4)=5 
// f(3)+f(2) = 3+2 
// f(2)+f(1)  =2+1


//---------------------------------------------------------------------
// help to remove time limit exceeded 
//array[46] 
class Solution {
    vector<int>array=vector<int>(46,-1);
public:
    int climbStairs(int n) {
       if(n<=2) return n ;
        if(array[n]!=-1) return array[n];
        array[n]= climbStairs(n-1)+climbStairs(n-2);
        return array[n];

        // solve by fabonacci series 
    }
};