//Recursive sollution
class Solution {
public:
    bool isMatch(string s, string p) {
        if(p.length() == 0){    //p string se out of bound ho gye
            if(s.length() == 0) return true; //agar dono string kahatam ho gyi
            else return false; //nhi toh false
        }
      //do cases agar '*' p[1] pe hoga ya nhi
        if(p[1] == '*'){  //p[1] == '*' case
            bool take = (s.length() > 0 && (p[0] == s[0] || p[0] == '.') && isMatch(s.substr(1) , p)); //we will take '*' and previous character combination and again start the recursive function to check the pattern 
          we will use substring function will convert the string to substring but maintaing that s.length should be positive
            bool nottake = isMatch(s , p.substr(2)); //if we dont take we will directly take the substring from second index
            return take || nottake; return or function because at any case we can get the string matching
              }
        return (s.length() > 0 && (p[0] == s[0] || p[0] == '.') && isMatch(s.substr(1),p.substr(1))); //if p[1]!='*'then we just simply check whether the first element is samme or not if not return false
    }
};
