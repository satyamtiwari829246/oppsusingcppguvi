#include<iostream>
using namespace std;

 class Solution {
public:
    bool isPalindrome(int x) {
        int rev=0;
        int temp=x;
        while(x!=0){
            int remainder=x%10;
            
            rev*=10;
            rev+=remainder;
            x=x/10;
            
        }
        if(rev<0){
            return false;
        }
       if(rev==temp){
        return true;
       }else{
        return false;
       }
        
    }
};

int main(){
    
    Solution s;
    int x;
    cin>>x;
    cout<<s.isPalindrome(x);
}