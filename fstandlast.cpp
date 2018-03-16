#include <bits/stdc++.h>
using namespace std;
 

int checkEquality(string s)
{
    return (s[0] == s[s.size() - 1]);
}
 
int countSubstringWithEqualEnds(string s)
{
    int result = 0;
    int n = s.length();
 
    
    for (int i = 0; i < n; i++)
 
      
       for (int len = 1; len <= n-i; len++)
 
          
          if (checkEquality(s.substr(i, len)))
            result++;
 
    return result;
}
 

int main()
{
    string s("abcab");
    cout << countSubstringWithEqualEnds(s);
    return 0;
}
