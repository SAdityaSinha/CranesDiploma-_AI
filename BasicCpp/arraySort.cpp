#include <iostream>

void Array_Swapping(int arr[],int len);
void pushElement(int arr[],int ele,int len);


void Array_Swapping(int arr[], int len)
{
    for(int i =0; i<len;i++)
    {
        if(arr[0]<arr[i])
        {
            pushElement(arr,i,len);
        }
    }
}

void pushElement(int arr[],int ele,int len)
{
    int temp = arr[0];
    arr[0]=arr[ele];
    for(int i=1;i<ele;i++)
    {
        
        arr[i] = temp;
    }
}
