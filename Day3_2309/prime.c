#include<stdio.h>
#include<stdbool.h>
#include<time.h>

// double time1,timeDif;

bool isPrime2(int i,int n){
    if(i*i<n){
        if(n%i==0)return false;
        return isPrime2(i+1,n);}
    return true;}
int main(){
    // int n;
    // printf("Enter the num : ");
    // scanf("%d",&n);
    

    clock_t start = clock();

    for(int i =1;i<=10000;i=i+1){
        // printf("%d is : ",i,isPrime2(2,i)?"Is Prime":"Not Prime");}
        isPrime2(2,i);
    }

    clock_t end = clock();

    printf("%.8f\n",(double)((end-start)));

}