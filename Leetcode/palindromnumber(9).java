import java.uti.*;
class Solution {
    public boolean isPalindrome(int x) {
      int r, sum = 0, temp;
      int n = x;
      
      while (n > 0) {
         r = n % 10;
         sum = (sum * 10) + r;
         n = n / 10;
     }
       
        if(sum==x){
            return true;
        }
        else{
            return false;
        }

    }
}