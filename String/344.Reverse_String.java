class Solution {
    public void reverseString(char[] s) {
        /*String reverseStr = new StringBuilder(new String(s)).reverse().toString();
        char[] newC = reverseStr.toCharArray();
        s = Arrays.copyOf(newC, newC.length);*/
        int i = 0;
        int j = s.length - 1;
        
        while(i <= j){
            char temp = s[i];
            s[i] = s[j];
            s[j] = temp;
            i++;
            j--;
        }
    }
}
