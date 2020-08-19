#include <bits/stdc++.h> 
using namespace std; 
int minSwap(int *arr, int n, int k) { 
    int count = 0; 
    for (int i = 0; i < n; ++i) 
        if (arr[i] <= k) 
            ++count; 
    int bad = 0; 
    for (int i = 0; i < count; ++i) 
        if (arr[i] > k) 
            ++bad; 
    int ans = bad; 
    for (int i = 0, j = count; j < n; ++i, ++j) { 
        if (arr[i] > k) 
            --bad; 
        if (arr[j] > k) 
            ++bad; 
        ans = min(ans, bad); 
    } 
    return ans; 
} 
int main() {   
    int arr1[] = {2, 7, 9, 5, 8, 7, 4}; 
    n = sizeof(arr1) / sizeof(arr1[0]); 
    k = 5; 
    cout << minSwap(arr1, n, k); 
    return 0; 
} 
