#include<iostream>
using namespace std;
#include<string>
// // factorial of a number using recrsion 

// int Fact(int n){
//     if(n==0){
//         return 1 ;
//     }
//      return n*Fact(n-1);
// }


// // fibonacci using recursion
//    double Fibonacci(int n){
//     if(n==0){
//         return 0;
//     }
//     if(n==1||n==2){
//         return 1;
//     }
//     return Fibonacci(n-1)+Fibonacci(n-2);
//    }

//    //  multipliation of two no

//     int multiply(int n ,int m){
//         if(m==0){
//             return 0;
//         }
//         return n+ multiply(n,m-1);
//     }

//     //Division of two numbers
//     int Division(int n, int m){
//          if(n<m){
//             return 0 ;
//          }
//          return 1+ Division(n-m,m);
//     }

//     //GCD/LCM of two numbers
//     int GDC(int n,int m){
//       if(m==0){
//         return n;
//       }
//       return GDC(m,n%m);
//     }

//     // sum of n natural no

//     int sun_n(int n){
        
//        if(n==0){
//         return 0;
//        }
//         return n+sun_n(n-1);
       
//     } 

//     // print the array

//     void print_arr(int arr[],int n,int i){
//         if(i==n){
//             return ;
//         }
//         cout<<arr[i]<<" ";
//         print_arr(arr,n,i+1);
//     }

// int main(){
//     int n=5;
//     //  cout<<Fact(5);
//     //  cout<<Fibonacci(6);
//     //  cout<< multiply(5,4);
//     //    cout<<Division(10,3);
//     //  cout<<GDC(10,2);
//     // cout<<sun_n(4);
//     int arr[5]={2,3,4,5,6};
//     print_arr(arr,5,0);
//      return 0;
// }





// // binary search using recursion
//    binary_search(int arr[],int low,int high,int n){
//     int mid = high+(high-low)/2
//     if(low>high) return -1;
//     if(arr[mid]==n){
//         return mid+1;
//     }else if(arr[mid]<traget)
//     {
//          binary_search(arr,mid+1,high,n);
//     }else{
//     binary_search(arr,low,mid,n);
//     }
   
//    }


//    //merge sort 

//     void merge_sort(int arr[],int low , int high){
//         if (high<=low) return
//     int mid= (low+ high)/2;
//     merge_sort(arr,low,mid);
//     merge_sort(arr,mid+1,high);
//     merge(arr,mid,low,high);

//    }

//    // merge

//       void merge(int arr[],int mid,int low,int high){
//         int arr1[high];
//         int k=0;
//         int i= low;
//         int j= mid+1;
//         while(i<mid&& j<high){
//             if(arr[i]>arr[j]){
//                 arr[k]=arr[j];
//                 j++;
//             }else{
//                 arr[k]=arr[i];
//                 i++;
//             }
//             k++;
//         }

//         while(i<mid){
//             arr[k]=arr[i];
//             i++;
//         }
//         while(j<high){
//             arr[k]=arr[j];
//             j++;
//         }

//         for(int i=0;i<high;i++){
//             arr[i]=arr1[i];
//         }

//       }



      //tower of honoi

      void  tower_of_honoai(int n,string s,string d,string h){
        if(n==1){
           cout<<s<<"->"<<d<<endl;
           return;
        }
        tower_of_honoai(n-1,s,h,d);
        cout<<s<<"->"<<d<<endl;
        tower_of_honoai(n-1,h,d,s);
      }

      int main(){
        int n=3;
          tower_of_honoai(n,"Source","destination","helper");
          return 0;
      }