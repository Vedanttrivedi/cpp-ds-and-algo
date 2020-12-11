#include <iostream>
using namespace std;

void print(int arr[],int size)
{
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<"\t";
	}
	cout<<endl;
}
void reverse(int arr[],int size)
{
	int start = 0;
	int end = size-1;
	while(start < end)
	{
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}
	print(arr,size);
	
}
int main()
{
	int arr[5] = {1,2,4,5,6};
	reverse(arr,5);
}