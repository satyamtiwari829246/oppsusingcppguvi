#include<iostream>
#include<vector>
using namespace std;

string longestCommonPrefix(vector<string>& strs){
    if(strs.empty()) return "";
    string prefix;
    for(int i=0;i<strs.size();i++){
        string s=strs[i];
         for(int j=0;j<2;j++){
            prefix=s[j];
         }
    }
}