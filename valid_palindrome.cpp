//A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.
//Given a string s, return true if it is a palindrome, or false otherwise.
//Input: s = "A man, a plan, a canal: Panama"
//Output: true

#include<bits/stdc++.h>
using namespace std;
void is_palindrome_or_not(string &s,int n){
	string s_ = "";
	int i =0;
	bool is_palindrome = true;
	while(n>0){
		if(isalnum(s[i])){
			s_+=tolower(s[i]);
		}
		i++;
		n--;
	}
	int left = 0;
	int right = s_.size()-1;
	while(left<right){
		if(s_[left]!=s_[right]){
			is_palindrome = false;
			break;
		}
		else{
			left++;
			right--;
		}
	}
	if(is_palindrome){
		cout << true;
	}
	else{
		cout << false;
	}
}
int main(){
	string s = "A man, a plan, a canal: Panama";
	is_palindrome_or_not(s,s.size());
	cout << endl;
	string s_ = "race a car";
	is_palindrome_or_not(s_,s_.size());

}




