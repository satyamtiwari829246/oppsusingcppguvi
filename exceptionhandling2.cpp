#include<iostream>
#include<exception>
using namespace std;
 void show() noexcept {
   try{
    throw string("this is a void function");
   }
};

int main(){
   show();
   return 0;
}
// #include<iostream>
// using namespace std;

// void show() noexcept {
//     throw string("error");   // bahar jayegi
// }

// int main() {
//     show();
// }