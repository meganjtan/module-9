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
    double d = 7.0;
    float f = 5.0f;
    int i = 3;

    cout << half(d) << endl;
    cout << half(f) << endl;
    cout << half(i) << endl;
}