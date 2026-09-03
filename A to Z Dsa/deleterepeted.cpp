#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int  Solution(vector<int> &nums){
    
    for(int i=0;i<nums.size();i++){
        int number=nums[i];
        for(int j=i+1;j<nums.size();){
            if(number=nums[j])
            nums.erase(nums.begin()+j);
            else
            j++;
        }
    }
   
}

int main(){
   vector<int> num={1,2,1,1,3,4};
    Solution(num);
    for(int i=0;i<num.size();i++){
        cout<<num[i];
    }
    return 0;
}