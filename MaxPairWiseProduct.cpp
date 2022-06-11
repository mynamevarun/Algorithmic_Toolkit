#include<iostream>
using namespace std;

long long maxPairwiseProduct(int arr[], int n){
    int max1=0, max2=0;
    // if (arr[0] > arr[1]){
    //     max1 = arr[0];
    //     max2 = arr[1];
    // } else if(arr[0] < arr[1]){
    //     max1 = arr[1];
    //     max2 = arr[0];
    // } else{
    //     max1 = max2 = arr[0];
    // }
    for (int i = 0; i < n; i++) {
        if (arr[i] >= max1){
            max2 = max1;
            max1 = arr[i];
        } else if(arr[i] >= max2) {
            max2 = arr[i];
        }
    }

    return (long long)max1 * max2;
}

int main() {
    int n;
    long long res;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    res = maxPairwiseProduct(arr , n);
    cout << res;
    return 0;
}