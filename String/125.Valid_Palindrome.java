//1
class Solution {
    public boolean isPalindrome(String s) {
        s = s.toLowerCase().replaceAll("[^a-zA-Z0-9]", "");
        StringBuilder reverseStr = new StringBuilder();
        reverseStr.append(s);
        reverseStr.reverse();
        if(s.equals(reverseStr.toString()))
            return true;
        else
            return false;
    }
}

//2
class Solution {
    public boolean isPalindrome(String s) {
        s = s.toLowerCase().replaceAll("[^a-zA-Z0-9]", "");
        StringBuilder reverseStr = new StringBuilder(s);
        reverseStr.reverse();
        return s.equals(reverseStr.toString());
          
    }
}