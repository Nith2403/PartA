#include <iostream>

using namespace std;

int main() {
    int num;
    int sum=0;
    while (num != 0){
        cout <<"Enter the number: ";
        cin >> num;

        if (num==0){
            break;
        }
        else{
            sum+=num;
        }
    }
    cout <<"Toal: "<<sum;
    return 0;
}