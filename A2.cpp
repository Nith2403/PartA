#include<iostream>
using namespace std;
int main(){
    int score;
    cout<<"Input your score: ";
    cin>>score;
    if(score>=60){
        cout<<"Pass"<<endl;
    }else{
        cout<<"Fail";
    }
    return 0;
}