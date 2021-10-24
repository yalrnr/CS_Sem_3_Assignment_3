#include<stdio.h>
int main(){
    long long int range;
    printf("Enter the Range upto which you want to find prime numbers\n");
    scanf("%lld",&range);
    long long int prime_numbers[range+1];
    for(long long int i=0;i<range;++i){
        prime_numbers[i]=i;
    }
    for(long long int i=2;i*i<=range;++i){
        if(prime_numbers[i]!=-1){
            for(long long int j=2*i;j<=range;j+=i){
                prime_numbers[j]=-1;
                //Ruling out Multiples of numbers as they cannot be prime
                //And assigning them '-1'
            }
        }
    }
    printf("The prime numbers within this range are : \n");
    for(long long int i=2;i<=range;++i){
        if(prime_numbers[i]!=-1)
        printf("%lld ",i);
    }
    return 0;
}