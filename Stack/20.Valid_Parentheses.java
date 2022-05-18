class Solution {
    public boolean isValid(String s) {
        Stack<Character> closed = new Stack<Character>();
	    for (char c : s.toCharArray()) {
		    if (c == '(' || c == '{' || c == '[')
			    closed.push(c);
            else if (c == ')' && !closed.isEmpty() && closed.peek() == '(')
                closed.pop();
            else if (c == '}' && !closed.isEmpty() && closed.peek() == '{')
                closed.pop();
            else if (c == ']' && !closed.isEmpty() && closed.peek() == '[')
                closed.pop();
		    else
			    return false;
	    }
	    return closed.isEmpty();
    }
}