//https://leetcode.com/problems/valid-parentheses
class Solution {
public:
  inline bool Check1 (char c)
{
	return ('(' == c || '{' == c || '[' == c);
}

inline bool Check2(char lb, char rb)
{
	return ('(' == lb && ')' == rb) || ('[' == lb && ']' == rb) || ('{' == lb && '}' == rb);
}

    bool isValid(string s) {
  stack<char> stack;
        if(s.size()%2 !=0) { return false; }
        if(s[0] == ']' || s[0] == ')' || s[0] == '}') {return false; }
	for (string::const_iterator it(s.begin()), itEnd(s.end()); it != itEnd; ++it)
	{
		if (Check1(*it))
		{
			stack.push(*it);
		}
		else if (Check2(stack.top(), *it))
		{
			stack.pop();
		}
		else
		{
			stack.push(*it);
			break;
		}
	}
return (stack.empty() ? true : false);
    }
};
