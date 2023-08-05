/*
UNION of array
arr1 = [1,3,5,7];
arr2 = [2,4,6];
*/

#include<iostream>
#include<vector>
using namespace std;

// here all duplicates contains
void unionArray(int arr1[], int n, int arr2[], int m){
    int k = n + m;
    int arr3[k];
    int j = 0;
    for(int i = 0; i<n; i++){
        arr3[j++] = arr1[i];
    }
    for(int i = 0; i<m; i++){
        arr3[j++] = arr2[i];
    }
    j = 0;
    for(int i = 0; i<k; i++){
        cout << arr3[i] <<  " ";
    }
}

// whenever we find union we remove the duplicates
void removeDuplicates(int *arr1, int n, int *arr2, int m){

    vector<int> ans;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
           if(arr1[i] == arr2[j]){
            arr2[j] = INT_MIN;
           }
        }
    }

    
    for(int i = 0; i<n; i++){
        if(arr1[i] != INT_MIN){
            ans.push_back(arr1[i]);
        }
    }
    for(int i = 0; i<m; i++){
        if(arr2[i] != INT_MIN){
            ans.push_back(arr2[i]);
        }
    }

    for(int i = 0; i<ans.size(); i++){
        cout << ans[i] << " ";
    }
     
}

int main(){
   int arr1[5] = {1,4,5,7,9};
   int n  = 5;
   int arr2[3] = {2,4,6};   
   int m = 3;
   removeDuplicates(arr1,n,arr2,m);

}