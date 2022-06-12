#include<iostream>
using namespace std;

long long int gcd(long long int a, long long int b) {
    if (b == 0)
        return a;
    else {
        int rem = a % b;
        return gcd(b, rem);   
    }
}

long long int lcm(long long int a, long long int b) {
    if (a > b) {
        return (long long int)a*b/gcd(a, b);
    } else {
        return (long long int)(a*b)/gcd(b, a);
    }
}

int main() {
    long long int a, b;
    cin >> a >> b;
    cout << lcm(a, b);
    return 0;
}