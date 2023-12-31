//A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.
//Given a string s, return true if it is a palindrome, or false otherwise.

//Convert first everything to a lowercase and store it in a string 
//and then initialize a pointer to 0 and other to the size -1 

class Solution {
public:
    bool isPalindrome(string s) {
        string s_ = "";
        for(int i =0;i<s.size();i++){
            if(isalnum(s[i])){
                s_+=tolower(s[i]);
            }

        }
        int m = 0;
        // typical case of moving a pointer from behind and from frony 
        
        int n = s_.size()-1;
        while(m<n){
            if(s_[m]!=s_[n]){
                return false;
            }
            else{
                m++;
                n--;
            }
        }
        return true;
        
        
    }
};
