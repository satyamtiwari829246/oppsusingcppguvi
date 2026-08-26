#include<iostream>
using namespace std;
  

class pattern{
    public:
   void printA(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout<<"*"<<" ";
        }
        cout<<" "<<endl;
    }
   }
   void printB(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"*"<<" ";
        }
        cout<<" "<<endl;
    }
   }
   void printC(int n){
    for(int i=n; i>0 ;i--){
        for(int j=0; j<i;j++){
             cout<<"*"<<" ";

        }
        cout<<" "<<endl;
    }

   }
   void printD(int n){
    for(int i=n; i>0 ;i--){
        for(int j=0; j<i;j++){
             cout<<j+1<<" ";

        }
        cout<<" "<<endl;
    }
   }
    void PrintE(int n){
        for(int i=0; i<n;i++){
            //Space
            for(int j=0;j<n-i-1;j++){
             cout<<" ";
            }

            //Star

            for(int j=0;j<2*i+1;j++){
                cout<<"*";
            }
            //Space
            for(int j=0;j<n-i-1;j++){
                cout<<" ";
            }
            cout << endl;
        }
    }
   void PrintF(int n){
    for (int i=0;i<n;i++){
        //Space
       
        for(int j=0;j<i;j++){
            cout<<" ";
        }

        //Star
        for(int j=0; j<2*n-(2*i+1);j++){
            cout<<"*";
        }
        //Space
       for(int j=0;j<i;j++){
        cout<<" ";
       }
       cout<<endl;
    }
   }
   void PrintG(int n){
    for(int i=0;i<n;i++){
        //space
    for(int j=0;j<n-i-1;j++){
        cout<<" ";
    }
    //Star
    for(int j=0;j<2*i+1;j++){
        cout<<"*";
    }
    //Space
    for(int j=0;j<n-i-1;j++){
        cout<<" ";
    }
     
     cout << endl;
    }
    for(int i=0;i<n;i++){

        //Space
        for(int j=0; j<i;j++){
            cout<<" ";
        }
        //Star
        for(int j=0;j<2*n-(2*i+1);j++){
            cout<<"*";
        }
        //Space
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        cout<< endl;
    }
}
   void PrintH(int n){
    for(int i=1;i<=2*n-1;i++){
       int stars=i;
       if(i>n){
        stars=2*n-i;
       }
       for(int j=1;j<=stars;j++){
        cout<<"*";
       }
    cout<< endl;
    }
   }
  void PrintI(int n){
    int start=1;
    for(int i=0;i<n;i++){
        if(i%2==0) start=1;
        else
        start=0;
       for(int j=0;j<=i;j++){
       
        cout<<start;
        start=1-start;
       }
        cout<<endl;
    }
   
  }
  void PrintJ(int n){
    int space=2*(n-1);
    for (int i=1;i<=n;i++){
        
        //Number
        for (int j=1;j<=i;j++){
            cout<<j;
        }
        //Space
         for(int j=1;j<=space;j++){
            cout<<" ";
         }
        //Number
        for(int j=i;j>=1;j--){
            cout<<j;
        }
        cout<< endl;
         space-=2;
    }
  }
  void PrintK(int n){
    int no=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<no<<" ";
            no=no+1;
        }
        cout<< endl;
    }
  }
  void PrintL(int n){
    for (int i=0;i<n;i++){
        char R='A';
        for(int j=0;j<=i;j++){
          cout<<R;
          R=R+1;
        }
        cout<<endl;
    }
  }
  void PrintM(int n){
    for (int i=n;i>0;i--){
        char R='A';
        for(int j=0;j<i;j++){
          cout<<R;
          R=R+1;
        }
        cout<<endl;
    }
  }
  void PrintN(int n){
    char R='A';
     for (int i=0;i<n;i++){
        
        for(int j=0;j<=i;j++){
          cout<<R;
         
        }
        cout<<endl;
        R=R+1;
    }
  }
};

int main(){
    int n,r;
    cin>>n;
     pattern A;
   for (int i=0;i<n;i++){
     cin >> r ;
     A.PrintN(r);
     
   }
  
   return 0;
}