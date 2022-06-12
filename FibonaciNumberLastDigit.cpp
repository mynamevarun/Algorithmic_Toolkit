#include<iostream>
using namespace std;

int fibonaciNumberLastDigit(int n) {
    long long int arr[61];
    arr[0] = 0;
    arr[1] = 1;

    for (int i = 2; i <= 60; i++) {
        arr[i] = arr[i-1] + arr[i-2];
    }


    return arr[n%60]%10;
}

int main() {
    int n;
    cin >> n;
    cout << fibonaciNumberLastDigit(n);

    return 0;
}