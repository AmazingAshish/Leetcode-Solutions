// Last updated: 7/19/2026, 10:24:22 PM
class Solution {
    public boolean isPalindrome(String s) {
        s=s.replaceAll("[^A-Za-z0-9]", "").toLowerCase();
        return check(0,s.length()-1,s);
    }
    
    public boolean check(int left,int right,String s){
        if(s=="")
            return true;
        if(left>=right)
            return true;
        if(s.charAt(left)!=s.charAt(right))
            return false;
        return check(left+1,right-1,s);
    }
}