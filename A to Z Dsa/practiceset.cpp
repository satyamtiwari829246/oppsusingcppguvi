#include<iostream>
using namespace std;
// factorial of a number using recrsion 

int Fact(int n){
    if(n==0){
        return 1 ;
    }
     return n*Fact(n-1);
}


// fibonacci using recursion
   double Fibonacci(int n){
    if(n==0){
        return 0;
    }
    if(n==1||n==2){
        return 1;
    }
    return Fibonacci(n-1)+Fibonacci(n-2);
   }

   //  multipliation of two no

    int multiply(int n ,int m){
        if(m==0){
            return 0;
        }
        return n+ multiply(n,m-1);
    }

    //Division of two numbers
    int Division(int n, int m){
         if(n<m){
            return 0 ;
         }
         return 1+ Division(n-m,m);
    }

    //GCD/LCM of two numbers
    int GDC(int n,int m){
      if(m==0){
        return n;
      }
      return GDC(m,n%m);
    }

    // sum of n natural no

    int sun_n(int n){
        
       if(n==0){
        return 0;
       }
        return n+sun_n(n-1);
       
    } 

    // print the array

    void print_arr(int arr[],int n,int i){
        if(i==n){
            return ;
        }
        cout<<arr[i]<<" ";
        print_arr(arr,n,i+1);
    }

int main(){
    int n=5;
    //  cout<<Fact(5);
    //  cout<<Fibonacci(6);
    //  cout<< multiply(5,4);
    //    cout<<Division(10,3);
    //  cout<<GDC(10,2);
    // cout<<sun_n(4);
    int arr[5]={2,3,4,5,6};
    print_arr(arr,5,0);
     return 0;
}