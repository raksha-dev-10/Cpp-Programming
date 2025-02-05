#include<iostream>
using namespace std;

int gcd(int x, int y) {
    if (y == 0) return x;  // Base case
    return gcd(y, x % y);  // Euclidean Algorithm by modulus
}

int main() {
    int x = 54, y = 72;
    cout << gcd(x, y);
    return 0;
}