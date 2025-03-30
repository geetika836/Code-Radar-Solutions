// Your code here...
#include<stdio.h>
/*void swap(int arr[mini],int arr[i]){
    int temp=arr[mini];
    int arr[mini]=arr[i];
    int arr[i]=temp;
}*/
void selectionSort (int arr[],int n){
    for(int i=0;i<=n-2;i++){
        int mini=i;
        for(int j=i;j<=n-1;j++){
            if(arr[j]<arr[mini]){
                mini=j;
            }
    
            int temp=arr[mini];
            arr[mini]=arr[i];
            arr[i]=temp;
            
        }
    }
}
int printArray(int arr[], int n){
     for(int i=0;i<n;i++){
         printf("%d ",arr[i]);
     }