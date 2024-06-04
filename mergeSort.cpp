#include<iostream>

using namespace std;


void merge(int arr[],int s,int e){
    int mid=s+((e-s)/2);
    int left=mid-s+1; //number of elements left side have
    int right=e-mid; //number of elements right side have
    // int *leftArray=new int[left];
    // int *rightArray=new int[right];
    int leftArray[left];
    int rightArray[right]; 

    int k=s;
    for(int i=0;i<left;i++){
        leftArray[i]=arr[k];
        k++;
    }
    k=mid+1;
    for(int i=0;i<right;i++){
        rightArray[i]=arr[k];
        k++;
    }

    int LIndex=0;
    int RIndex=0;
    int MainIndex=s;

    while(LIndex<left || RIndex<right){
        if(leftArray[LIndex]<rightArray[RIndex]){
            arr[MainIndex]=leftArray[LIndex];
            LIndex++;
            MainIndex++;
        }
        else{
            arr[MainIndex]=rightArray[RIndex];
            RIndex++;
            MainIndex++;
        }
    }
        while(LIndex<left){
            arr[MainIndex]=leftArray[LIndex];
            LIndex++;
            MainIndex++;
        }
        while(RIndex<right){
            arr[MainIndex]=rightArray[RIndex];
            RIndex++;
            MainIndex++;
        }
    
    // delete[]leftArray;
    // delete[]rightArray;
}
void mergeSort(int arr[], int s,int e){
    if(s>=e){return;}
    int mid =s+((e-s)/2);
    mergeSort(arr,s,mid);
    mergeSort(arr,mid+1,e);

    merge(arr,s,e);
}
int main(){
    int n; cin>>n;

    int arr[n];
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int s=0;
    int e=n-1;
    
    mergeSort(arr,s,e);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
