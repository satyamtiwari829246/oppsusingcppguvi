#include <iostream>
using namespace std;

int main(){
    int r1,c1,r2,c2;
    cout<<"Enter The Row And column of matrix First"<<endl;
    cin>>r1>>c1;
    cout<<"Enter The Row And Column of Matrix Second"<<endl;
    cin>>r2>>c2;
    if(c1!=r2){
        cout<<"invailed matrix"<<endl;
        return 0;
    }
    int first[r1][c1];
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
        cin>>first[i][j];
        }
    }
    int second[r2][c2];
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
        cin>>second[i][j];
        }
    }

    int result[r1][c2];
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            for(int k=0;k<c1;k++){
                result[i][j]+=first[i][k] * second[k][j];
            }
        }
    }
     for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
    

    
}