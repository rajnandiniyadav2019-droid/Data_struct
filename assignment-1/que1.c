#include<stdio.h>
#define SIZE 9
int  linear_s(int arr[SIZE], int key)
{
 for (int i=0;i<=SIZE;i++)
 {  
	 for()
     if(key==arr[i])
	 {   
		 
		 return i;
	 }
 } return -1;

}
int main()
{
int arr[SIZE]={11,22,11,44,55,66,77,88,99};
int key;
printf("enter the key:");
scanf("%d", &key);
int ret= linear_s(arr,key);
printf("key index:%d\n", ret);
if(ret==-1)
{
printf("key is not found");
} else {
	printf("key is found");
}

	return 0;
}
