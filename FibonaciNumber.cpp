#include<iostream>
using namespace std;

int fibonaciNumber(int n) {
    if (n <= 1)
        return n;
    else 
        return fibonaciNumber(n-1) + fibonaciNumber(n-2);
}

int main() {
    int n;
    cin >> n;
    cout << fibonaciNumber(n);

    return 0;
}