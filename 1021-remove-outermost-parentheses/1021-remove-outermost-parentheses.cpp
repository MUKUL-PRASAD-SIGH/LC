class Solution {
public:
    string removeOuterParentheses(string s) {
        int count=0;
        int mark1=0;
        string str;
        str="";
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='(') 
            count=count+1;
            if(s[i]==')') count=count-1;
            if(count==0) 
            {
                    int mark2=i;
                    str+=s.substr(mark1+1,mark2-mark1-1);
                    mark1=i+1;
            }
            
        }
        return str;
            }
};