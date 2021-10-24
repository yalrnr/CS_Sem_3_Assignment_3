#include<stdio.h>
#include<time.h>
void Calculation(int arr[],int n);
void InsertionSort(int arr[],int n);
int main(){
    int n; scanf("%d",&n);
    int arr[n],i,j; for(i=0;i<n;++i) scanf("%d",&arr[i]);
    Calculation(arr,n);
    return 0;
}
void Calculation(int arr[],int n){
    clock_t startInsertionSort,endInsertionSort;
    long long int t_InsertionSort;
    startInsertionSort=clock();
    InsertionSort(arr, n);
    endInsertionSort=clock();
    t_InsertionSort=endInsertionSort-startInsertionSort;
    printf("Total clock ticks elapsed for Insertion Sort : %lld\n", t_InsertionSort);
    //To get the time in second 
    //replace the variable by (double)t_InsertionSort/(double)CLOCKS_PER_SEC
    return;
}
void InsertionSort(int arr[],int n){
    int i,j,key;
    for(i=0;i<n;++i){
        key=arr[i];
        j=i-1;
        while(j>=0 && arr[j]<key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
    return;
}
/*
     ---Analysis of the Insertion Sort---

     Input size-10000
     case 1- Sorted data(Ascending Order)
     case 2- Sorted data(descending order)
     case 3- Random data
     Outputs-
     case 1- Total clock ticks elapsed for Insertion Sort : 65141
     case 2- Total clock ticks elapsed for Insertion Sort : 90308
     case 3- Total clock ticks elapsed for Insertion Sort : 88308

     
     Input size-12000
     case 1- Sorted data
     case 2- Sorted data(descending order)
     case 3- Random data
     Outputs-
     case 1- Total clock ticks elapsed for Insertion Sort : 99107
     case 2- Total clock ticks elapsed for Insertion Sort : 120150
     case 3- Total clock ticks elapsed for Insertion Sort : 116150

For Insertion Sort, we have-
      #Worst complexity: n^2           
      #Average complexity: n^2         
      #Best complexity: n    
Insertion Sort works best when the data is already sorted in ascending order, 
in this case it does not enter while loop as the condions fail and 
performs the algorithm in O(n).
Whereas in case of data sorted in descending order it takes O(n^2) time, which is 
its worst performance, in this case the loop has to run each time and data is 
inserted at extreme end, thus taking most time.
While in case of random data or average case, more often than not it is likely to enter the while
loop thus again performing the algorithm in  O(n^2).
*/
