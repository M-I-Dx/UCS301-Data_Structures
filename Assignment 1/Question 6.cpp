//6) Bubble Sort is the simplest sorting algorithm that works by repeatedly
//swapping the adjacent elements if they are in wrong order.
//Code the Bubble sort with the following elements:

#include <iostream>
using namespace std;

void display(int len, int arr[])
{
  cout<<"Elements of the Array: "<<endl;
	for(int i=0; i<len; i++)
	{
 	    cout<<arr[i]<<" ";
    }
	cout<<endl<<endl;
}


void bubble_sort(int len, int arr[])
{
  for(int i=0; i<len; i++)
  {
      for(int j=0; j<len-i-1; j++)
      {
          if(arr[j] > arr[j+1])
          {
              int temp = arr[j];
              arr[j] = arr[j+1];
              arr[j+1] = temp;

          }
      }
  }
}

int main()
{
    int len, n;

    cout<<"Please enter the length of the array: ";
    cin>>len;

    int arr[len];
    cout<<"Enter the elements: "<<endl;
    for(int i=0; i<len; i++)
    {
        cin>>n;
        arr[i] = n;
    }
    //Comparision between unsorted and sorted array
    cout<<"\nUnsorted array: "<<endl;
    display(len, arr);

    bubble_sort(len, arr);

    cout<<"\nSorted array: "<<endl;
    display(len, arr);


    return 0;
}
