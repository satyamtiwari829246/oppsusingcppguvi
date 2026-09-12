
   #include <iostream>
   using namespace std;
   int findComplement(int num) {
        // int temp = num;
        // int binary=0;
        // while(temp>1){
            
        //     int remainder = temp%2;
        //     if(remainder==1){
        //         binary=(binary*10)+0;
        //     }
        //     if(remainder==0){

        //         binary=(binary*10)+1;
        //     }
        //     temp=temp/2;
        // }
        // cout<<binary<<endl;
        // int base=1;
        // int decimal=0;
        // while(binary>0){
        //     int remainder = binary%10;
        //     decimal=decimal+(remainder*base);
        //     base = base * 2;
        //     binary=binary/10;
        // }
        // return decimal;
        

        int mask = 0;
        int temp = num;

        while (temp > 0) {
            mask = (mask << 1) | 1;
            // cout<<mask<<endl;
            temp = temp >> 1;
            cout<<temp<<endl;
        }

        return num ^ mask;
    
};
    

    int main(){
        int num;
        cout<<"Enter the number"<<endl;
        cin>>num;
        cout<<findComplement(num);
    }