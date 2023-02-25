#include <stdio.h>

int search(int numbers[], int low, int high, int value)
{
if (high >= low)
{
int m = low + (high - low)/2;
if (numbers[m] == value) 
return m;
if (numbers[m] > value) 
return search(numbers, low, m-1, value);
return search(numbers, m+1, high, value);
}
return -1;
}

int main(void)
{
int numbers[] = {2,7,9,12,30,67,78,92};
int high= sizeof(numbers)/ sizeof(numbers[0]);
int low=0;
int value = 67;
int getRes = search(numbers, low, high-1, value);
if(getRes>0)
printf("The numbers is present in position: %d",getRes);
else
printf("The numbers is not present");
return 0;
}


