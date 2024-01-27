#include<bits/stdc++.h>
using namespace std;

int count_(string &s,int k){
  int size = s.size();
    int count = 0;
    map<char,int>map_;
    int left = 0;
    for(int i =0;i<size;i++){
        map_[s[i]]++;
        while(map_.size()>k){
            map_[s[i]]--;
            if(map_[s[i]]==0){
                map_.erase(s[i]);
            }
            left++;
        }
        count += i-left+1;
    }
    return count;
}
int at_most(string &s,int k){
    return count_(s,k)-count_(s,k-1);
}
int main(){
    string s;
    cin >> s;
    int k;
    cin >> k;
    cout << at_most(s,k);
}