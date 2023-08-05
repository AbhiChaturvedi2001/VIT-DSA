// Find the unique Element

// in this question we have to use XOR operation and playing with bits

#include<iostream>
#include<vector>
using namespace std;

int findUnique(vector<int> arr){
    int n = arr.size();
    int ans = 0;
    for(int i = 0; i<n; i++){
        ans = ans ^ arr[i];
    }

    return ans;
}

int main(){
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }

    int ans = findUnique(arr);
    cout << "the unique element is in this array " << ans << endl; 
}