// Megan Tan
// CIS 1202 801
// Aug 4, 2026
// Module 9 - Templates

#include <iostream>
using namespace std;

template <typename T>
T half(T number){
    return number / 2;
}

int main(){
    double a = 7.0;
    float b = 5.0f;
    int c = 3;

    cout << half(a) << endl;
    cout << half(b) << endl;
    cout << half(c) << endl;
}