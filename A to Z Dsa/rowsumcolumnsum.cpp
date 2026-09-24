#include<iostream>
using namespace std;

int main(){
    int  rows,columns;
    cout<<"enter the number of rows and columns:"<<endl;
    cin>>rows>>columns;
    int arr[rows][columns];
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            cin>>arr[i][j];
        }
    }
    //row sum
      int rowSum=0;
    for(int i=0;i<rows;i++){
            
    for(int j=0;j<columns;j++){
        rowSum+=arr[i][j];
    }
    
    }
    cout<<"row sum:"<<rowSum<<endl;
    //column sum 
    int columnSum=0;
    for(int j=0;j<columns;j++){
        for(int i=0;i<rows;i++){
            columnSum+=arr[i][j];
        }
       
    }
 cout<<"column sum:"<<columnSum<<endl;
    //digonal sum 
    int digonalSum=0;
    for(int i=0;i<rows;i++){
       digonalSum+=arr[i][i];  
    }
    cout<<"diagonal sum:"<<digonalSum<<endl;

}