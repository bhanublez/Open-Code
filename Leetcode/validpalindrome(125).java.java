#import java.util.*;
class Solution {
    public boolean isPalindrome(String s) {
        String fix_s="";
        for(char c:s.toCharArray()){
            if(Character.isDigit(c) || Character.isLetter(c)){
                fix_s+=c;
            }
        }

        fix_s= fix_s.toLowerCase();
        int a_pointer=0;
        int b_pointer=fix_s.length()-1;
        while(a_pointer<=b_pointer){
            if(fix_s.charAt(a_pointer) != fix_s.charAt(b_pointer)){
                return false;
            }
            a_pointer++;
            b_pointer--;
        }
        return true;
    }
}