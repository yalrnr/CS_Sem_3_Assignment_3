#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void InsertItemAtLast(int A[], int n, int key){
        n++;
        A[n-1]=key;
        return;
    }
void InsertItemAtFirst(int A[], int n, int key){
        n++;
        for(int i=n-2;i>=0;i--)
        A[i+1]=A[i];
        A[0]=key;
        return;
    }
void InsertItemAtIndex(int A[], int n, int i, int key){
    n++;
    for(int j=n-2;j>=i;j--)
    A[j+1]=A[j];
    A[i]=key;
    return;
    }
void DeleteItemFromLast(int A[], int n){
    n--;
    return;
}
void DeleteItemfromFirst(int A[], int n){
    for(int i=1;i<=n-1;++i){
        A[i-1]=A[i];
    }
    n--;
    return;
}
void DeleteItemFromIndex(int A[], int n, int i){
     for(int j=i;j<n;++j)
     A[j]=A[j+1];
     n--;
}
int FindItemUnsorted(int A[], int n){
    int index=-1;
       for(int j=0;j<=n-2;j++){
        if(A[j]>A[j+1])
        index=j;
    }
    return index;
}
int FindItemSorted(int A[], int n){
    int index=-1;
       for(int j=0;j<=n-2;j++){
        if(A[j]<A[j+1])
        index=j;
    }
    return index;
    //first index of last sorted pair
}
void SortArray(int A[], int n){
    int temp;
    for (int i = 0; i < n; i++) {     
        for (int j = i+1; j < n; j++) {     
           if(A[i] > A[j]) {    
               temp = A[i];    
               A[i] = A[j];    
               A[j] = temp;    
           }     
        }     
    }  
    return;
}
int *ExtractSubest(int A[], int n, int i, int j){
    int size=j-i+1;
    int *Extracted_Subset=(int*)malloc(size*sizeof(int));
    for(int k=i;k<=j;k++){
        Extracted_Subset[k-i]=A[k];
    }
    return Extracted_Subset;
}
void DeleteSubest(int A[], int n, int i, int j){
    for(int k=j+1;k<n;k++){
        A[k-j+i-1]=A[k];
    }
    n-=(j-i+1);
    return;
}
void SplitIntoTwoArray(int A[], int n,int *A1,int *A2){
     int length=n/2;
     for(int i=0;i<=length;++i){
        A1[i]=A[i];
     }
     int k=0;
     for(int i=length+1;i<n;++i,++k){
         A2[k]=A[i];
     }
    return;
}
void CloneArray(int A[], int n, int B[]){
    for(int i=0;i<n;++i){
        B[i]=A[i];
    }
    return;
}
void ShiftLeftArray(int A[], int n, int r){
    int temp;
    while(r){
        temp = A[0];  
            for(int i = 0; i < n - 1; i++)  
                A[i] = A[i + 1];  
            A[n - 1] = temp;
            r--;
    }
    return;
}
void ShiftRightArray(int A[], int n, int r){
    int temp;
    while(r){
        temp = A[n-1];  
            for(int i = n-1; i > 0; i--)  
                A[i] = A[i - 1];  
            A[0] = temp;
            r--;
    }
    return;
}
void RotateArrayClockwise(int A[], int n, int r){
    int temp;
    while(r){
        temp = A[n-1];  
            for(int i = n-1; i > 0; i--)  
                A[i] = A[i - 1];  
            A[0] = temp;
            r--;
    }
    return;
}
void RotateArrayAntiClockwise(int A[], int n, int r){
    int temp;
    while(r){
        temp = A[0];  
            for(int i = 0; i < n - 1; i++)  
                A[i] = A[i + 1];  
            A[n - 1] = temp;
            r--;
    }
    return;
}
int FindMin(int A[], int n, int r){
    int index,temp=A[0];
    for(int i=1; i<n; i++){
         if(temp>A[i]){
		  temp=A[i];
          index=i;
         }
    }
    return index;
}
int FindMax(int A[], int n, int r){
    int index,temp=A[0];
    for(int i=1; i<n; i++){
         if(temp<A[i]){
		  temp=A[i];
          index=i;
         }
    }
    return index;
}
void FillArrayPseudoRandom(int A[], int n){
    for(int i=0;i<n;i++){
        A[i]=rand();
    }
    return;
}
void FillArrayTrueRandom(int A[], int n){
    srand(time(0));
    for(int i=0;i<n;i++){
        A[i]=rand();
    }
    return;
}
int *IncreaseArraySize(int A[], int n, int m){
    return (int *)realloc(A, m);
}
void SetArrayToZero(int A[], int n){
    for(int i=0;i<n;i++){
       A[i]=0;
    }
    return;
}
void DeleteAllItemOfArray(int A[], int n){
    for(int i=0;i<n;i++){
       A[i]=0;
    }
    return;
}
void DeleteArray(int A[], int n){
    free(A);
    return;
}
int *AllocateArray(int *A, int n){
    int *ans=(int *)malloc(n*sizeof(int));
    return ans;
}