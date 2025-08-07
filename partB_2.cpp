#include <iostream>
using namespace std;
int main(){
    int n=10;
    while( n>0 ){
        if (n!=2 && n!=4){
          cout<<n<<endl;
        }
        if(n==4){
            cout<<"This number is 4."<<endl;  
        }
    n--;
    }
    return 0;
}