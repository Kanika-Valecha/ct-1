//Name - Kanika Valecha
//RollNo - 2010990357
//Set 03
//Quetion - 1

#include<iostream>
#include<algorithm>
using namespace std;
//Function to rearrange array
void altArr(int arr[], int n){
    for (int i = 1; i < n; i += 2){
        if (arr[i - 1] > arr[i]){
            swap(arr[i - 1],arr[i]);
        }
        if (i + 1 < n && arr[i + 1] > arr[i]) {
            swap(arr[i + 1],arr[i]);
        }
    }
}
int main(){
    //Taking input
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //Function Calling
    altArr(arr,n);
    //Printing Array
    cout<<"{";
    for(int i=0;i<n-1;i++){
        cout<<arr[i]<<", ";
    }
    cout<<arr[n-1]<<"}"<<endl;

    return 0;
}