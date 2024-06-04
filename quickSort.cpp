#include<iostream>

using namespace std;

void quickSort(int arr[],int start,int end){
    int i=start-1;
    int j=start;
    int pivot=end;
    if(start>=end){return;}

    while(j<pivot){
        if(arr[j]<arr[pivot]){
            i++;
            swap(arr[i],arr[j]);
        }
        j++;
    }
    
    swap(arr[pivot],arr[i+1]);
    quickSort(arr,start,i);
    quickSort(arr,i+2,end);
}

signed main(){
    int n; cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int start=0;
    int end=n-1;
    quickSort(arr,start,end);
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
