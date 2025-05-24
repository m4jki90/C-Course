#include <iostream>
using namespace std;

int main () {
    int n, sum;
    cout << "Choose a number: ";
    cin >> n;
    sum = n * (n+1)/2;
    cout << "This is sum:" << sum;
    return 0;  
}