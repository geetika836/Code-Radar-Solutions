// Your code here...
#include<stdio.h>
int swap(int &a,int &b){
    int temp=arr[mini];
    int arr[mini]=arr[i];
    int arr[i]=temp;
}
int selectionSort (int &arr,int &n){
    for(int i=0,i<=n-2;i++){
        int mini=i;
        for(int j=i;j<=n-1;j++){
            if(arr[j]<arr[mini]){
                mini=j;
            }
            swap(arr[mini],arr[i]);
            
        }
    }
}