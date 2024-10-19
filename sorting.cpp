// BUbble Sort
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





// Selection Sort
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





// Insertion Sort
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





// Quick Sort
#include<bits/stdc++.h>
using namespace std;
int partion(int arr[],int low, int high);
void quickSort(int arr[],int low,int high);
void quickSort(int arr[],int low,int high){
if(low<high){
    int pvoitIdx=partion(arr,low,high);
    quickSort(arr,low,pvoitIdx-1);
    quickSort(arr,pvoitIdx+1,high);
}
}
int partion(int arr[],int low,int high){
    int i=low-1;
    int poivtElement=arr[high];
    for(int j=low; j<high; j++){
        if(arr[j]<poivtElement){
            i++;
            int temp=arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
        }
    }
    i++;
    int temp=arr[i];
    arr[i]=poivtElement;
    arr[high]=temp;
    return i;
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
    cout<<"\nBefore Quick sort\n";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    quickSort(arr,0,n-1);
    cout<<"\nAfter Quick sort\n";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}




// Merge Sort
#include<bits/stdc++.h>
using namespace std;
void merge(int arr[],int low,int mid, int high);
void mergeSort(int arr[],int low,int high);
void mergeSort(int arr[],int low,int high){
if(low<high){
    int mid=low+(high-low)/2;
    mergeSort(arr,low,mid);
    mergeSort(arr,mid+1,high);
    merge(arr,low,mid,high);
}
}
void merge(int arr[],int low,int mid,int high){
int idx1=low,idx2=mid+1;
int size=high-low+1;
int temp[size],k=0;
while(idx1<=mid&&idx2<=high){
    if(arr[idx1]<arr[idx2]){
        temp[k]=arr[idx1];
        k++,idx1++;
    }
    else{
        temp[k]=arr[idx2];
        k++,idx2++;
    }
}
while(idx1<=mid){
        temp[k]=arr[idx1];
        k++,idx1++;
}
while(idx2<=high){
        temp[k]=arr[idx2];
        k++,idx2++;
}
for(int k=0,i=low; k<size; k++,i++){
    arr[i]=temp[k];
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
    cout<<"\nBefore Merge sort\n";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    mergeSort(arr,0,n-1);
    cout<<"\nAfter Merge sort\n";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}




// Radix Sort
#include<bits/stdc++.h>
using namespace std;

void radixSort(int arr[],int n);
int maxElement(int arr[],int n);
void countSort(int arr[],int n,int place);
void radixSort(int arr[],int n){
    int maxVal=maxElement(arr,n);
    for(int place=1; maxVal/place>0; place=place*10){
        countSort(arr,n,place);//here place is define the ones or tense place of digit
    }


}
int maxElement(int arr[],int n){
    int maxVal=arr[0];
    for(int i=1; i<n; i++){
        if(arr[i]>maxVal){
            maxVal=arr[i];
        }
    }
    return maxVal;
}
void countSort(int arr[],int n, int place){
    int count[10]={0};//all the index is filled with zero
    int temp[n];
    for(int i=0; i<n; i++){
        count[(arr[i]/place)%10]++;//(arr[i]/place)%10 give the ones place digit or tense place digit

    }
    //update the count array for correct position of digit 
    for(int i=1; i<10; i++){
        count[i]=count[i]+count[i-1];
    }
    //here to store the digit in correct position in temp array
    for(int i=n-1; i>=0; i--){//storing the digit from last
        int idx=count[(arr[i]/place)%10]-1;//this give the correct position of digit
        temp[idx]=arr[i];
        count[(arr[i]/place)%10]--;//update the position of digit
    }
    for(int i=0; i<n; i++){
        arr[i]=temp[i];
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
    cout<<"\nBefore Radix sort\n";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    radixSort(arr,n);
    cout<<"\nAfter Radix sort\n";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
