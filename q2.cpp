//Name - Kanika Valecha
//RollNo - 2010990357
//Set 03
//Quetion - 2

#include <bits/stdc++.h>
using namespace std;
void findPair(int arr[], int n, int k){
    unordered_map<int, int> map;
    for (int i = 0; i < n; i++){
        if (map.find(k - arr[i]) != map.end()){
            cout << "Pair found (" << arr[map[k - arr[i]]] << ", "<< arr[i] << ")\n";
        }
        map[arr[i]] = i;
    }
    return;
    cout << "Pair not found";
}
int main(){
    //Taking input
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum;
    cout<<"Target: ";
    cin>>sum;
    //Function Calling
    findPair(arr,n,sum);

    return 0;
}