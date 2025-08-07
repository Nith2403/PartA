#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter you age : ";
    cin>>age;
    if(age<=12){
        cout<<"Chile"<<endl;
    }else if(age>=13 && age<=19){
        cout<<"Teen"<<endl;
    }else{
        cout<<"Adult";
    }
    return 0;
}