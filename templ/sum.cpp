#include<iostream>
using namespace std;
 template <typename T>
 T sum(T a, T b) {
    return a + b;
}
 int main() {
        
    cout << "Sum of integers: " << sum(5, 10) << endl;
    cout << "Sum of doubles: " << sum(5.5, 10.2) << endl;
    return 0;
 }