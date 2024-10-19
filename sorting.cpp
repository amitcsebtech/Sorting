BUbble Sort
#include<bits/stdc++.h>
using namespace std;
void bubbleSort(int arr[],int n);
void bubbleSort(int arr[],int n){
    int f;
    for(int i=0; i<n-1; i++){
        f=0;
        for(int j=0; j<n-1-i; j++){
            if(arr[j]>arr[j+1]){
                f=1;
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
        if(f==0)
        return ;
    }
}
int main(){
    int n;
    cout<<"Enter a size of array = ";
    cin>>n;
    int arr[n];
    cout<<"Enter an element of array:\n";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"\nBefore Bubble sort\n";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    bubbleSort(arr,n);
    cout<<"\nAfter Bubble sort\n";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}


Selection Sort
#include<bits/stdc++.h>
using namespace std;
void selectionSort(int arr[],int n);
void selectionSort(int arr[],int n){
    int min;
    for(int i=0; i<n-1; i++){
        min=i;
        for(int j=i+1; j<=n-1; j++){
            if(arr[min]>arr[j]){
              min=j;
            }
        }
        if(min!=i){
            int temp=arr[i];
            arr[i]=arr[min];
            arr[min]=temp;
        }
    }
}
int main(){
    int n;
    cout<<"Enter a size of array = ";
    cin>>n;
    int arr[n];
    cout<<"Enter an element of array:\n";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"\nBefore Selection sort\n";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    selectionSort(arr,n);
    cout<<"\nAfter Selection sort\n";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}



Insertion Sort
#include<bits/stdc++.h>
using namespace std;
void insertionSort(int arr[],int n);
void insertionSort(int arr[],int n){
    int temp;
    for(int i=1; i<=n-1; i++){
        temp=arr[i];
        int j=i-1;
        while(j>=0&&arr[j]>temp){
            arr[j+1]=arr[j];
            j--;
        }
        
    arr[j+1]=temp;
    }
}
int main(){
    int n;
    cout<<"Enter a size of array = ";
    cin>>n;
    int arr[n];
    cout<<"Enter an element of array:\n";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"\nBefore Insertion sort\n";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    insertionSort(arr,n);
    cout<<"\nAfter Insertion sort\n";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}