// subtract the product and sum of the digits of an integer.
// given an integer number n, return the difference between the product of its digits and the sum of its digit

// Example-1 :
//input n=234;
// output=15
// Explanation:-
// product of digits = 2*3*4 = 24;
// sum of digits = 2+3+4=9
//  result = product - sum
 
class Solution {
public:
    int subtractProductAndSum(int n) {

        int product =1;
        int sum=0;

        while(n!=0){
            int digit = n%10;
            product= product*digit;
            sum= sum+digit;

            n=n/10;
        }
        
        int result = product-sum;
        return result;
    }
};