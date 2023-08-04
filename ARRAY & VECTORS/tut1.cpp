// today i am learning vector 

#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> arr;

    cout << "size of the vector is  " << arr.size() << endl;
    cout << "capacity of the vectior is " << arr.capacity() << endl;

    // insert the element to the vector

    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(30);

    cout << "size of the vector is  " << arr.size() << endl;
    cout << "capacity of the vectior is " << arr.capacity() << endl;

    // now the delete the element into the vector

    arr.pop_back();
    arr.pop_back();
    arr.pop_back();
    cout << "size of the vector is  " << arr.size() << endl;
    cout << "capacity of the vectior is " << arr.capacity() << endl;
    
    // if we want to intialize vector with same value and when we define the size of the vector explicitly then the capacity of the vector would be same
    vector<int> brr(10,-1);
    for(int i = 0; i<brr.size(); i++){
        cout << brr[i] << " ";
    }
    

    // another ways to create vector
    vector<int> crr{10,20,30,40};
     for(int i = 0; i<crr.size(); i++){
        cout << crr[i] << " ";
    }



}