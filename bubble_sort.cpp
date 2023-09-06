#include<iostream>
using namespace std;
void bubble_sort(int *arr,int n){
   if(n==1){   //n==0 here come in use when array is empty
    return;
   }
  for(int i=0;i<n-1;i++){
    if(arr[i]>arr[i+1]){
        swap(arr[i],arr[i+1]);
    }
  }

   bubble_sort(arr,n-1);
}

int main(){
    int arr[5]={2,76,34,12,34};
   int n =5;
    bubble_sort(arr,n);
    for(int i=0;i<n;i++){
        cout<< arr[i] <<" ";
    }
    return 0;
}