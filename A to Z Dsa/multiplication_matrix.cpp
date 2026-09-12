// #include <iostream>
// using namespace std;

// int main() {

//     int A[2][3] = {
//         {1, 2, 3},
//         {4, 5, 6}
//     };

//     int B[3][2] = {
//         {7, 8},
//         {9, 10},
//         {11, 12}
//     };

//     int C[2][2] = {0};

//     for (int i = 0; i < 2; i++) {
//         for (int j = 0; j < 2; j++) {
//             for (int k = 0; k < 3; k++) {
//                 C[i][j] += A[i][k] * B[k][j];
//             }
//         }
//     }

//     // Print result
//     cout << "Result Matrix:\n";

//     for (int i = 0; i < 2; i++) {
//         for (int j = 0; j < 2; j++) {
//             cout << C[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

#include <iostream>
using namespace std;

int main(){
    int r1,c1,r2,c2;
    //for first matrix
    cout<<"Enter The Row And column of matrix First"<<endl;
    cin>>r1>>c1;
    cout<<"Enter The Row And Column of Matrix Second"<<endl;
    cin>>r2>>c2;
    if(c1!=r2){
        cout<<"invailed matrix"<<endl;
        return 0;
    }
    //taking first matrix input
    int first[r1][c1];
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
        cin>>first[i][j];
        }
    }
    //taking second matrix input
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
                result[i][j]=
            }
        }
    }
    
    

    
}