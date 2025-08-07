#include <iostream>
using namespace std;
int main() {
    int n = 1;
    int sum=0;
    while (n <= 10) {
        sum+=n;
        n++;
    }
    cout<<sum<<endl;
    return 0;
}