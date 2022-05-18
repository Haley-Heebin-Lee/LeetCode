class Solution {
    public boolean isAnagram(String s, String t) {
        if(s==null || t==null || s.length()!=t.length())
            return false;
        
        char[] ss = s.toCharArray();
        char[] tt = t.toCharArray();
        Arrays.sort(ss);
        Arrays.sort(tt);
        String strs = new String(ss);
        String strt = new String(tt);
        return strs.equals(strt);
    }
}
