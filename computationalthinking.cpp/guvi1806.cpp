#include <iostream>
using namespace std;

class Matrix {
private:
int mat[2][2];
   
    
public:
    // Constructor to read 2x2 matrix
     
   Matrix() {
    int* p = &mat[0][0];           // points to first element
    for(int i = 0; i < 4; i++) {
        cin >> *p++;
    }
   
}
Matrix(){}
    
    // Overloading + operator
    Matrix operator + ( Matrix Z)  {
        Matrix result;
        
        for(int i = 0; i < 2; i++) {
            for(int j = 0; j < 2; j++) {
                result.mat[i][j] = mat[i][j] + Z.mat[i][j];
            }
        }
        return result;
    }
    
    // Display function
    void display() const {
        for(int i = 0; i < 2; i++) {
            for(int j = 0; j < 2; j++) {
                cout << mat[i][j];
                if(j == 0) cout << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    // First matrix - reads first 4 numbers
    Matrix A;
    
    // Second matrix - reads next 4 numbers
    Matrix B;
    
    // Add matrices using overloaded +
    Matrix C = A + B;
    
    // Display result
    C.display();
    
    return 0;
}