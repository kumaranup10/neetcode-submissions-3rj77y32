class Solution {
public:
    bool isPalindrome(string s) {
        int i=0,j=s.size()-1;

        while(i<j)
        {
            while (i < j && !isalnum(s[i])) i++;
            while (i < j && !isalnum(s[j])) j--;
            char a,b;
            if(isalpha(s[i]))
            a=tolower(s[i]);
            else a=s[i];
            if(isalpha(s[j]))
            b=tolower(s[j]);
            else b=s[j];

            if(a!=b)
            return false;
            i++;
            j--;
        }
        return true;
    }
};
