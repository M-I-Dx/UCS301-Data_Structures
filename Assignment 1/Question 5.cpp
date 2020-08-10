//Input preassumptions: The array is already sorted.
//Example input: array = [2, 5, 7, 11, 13]

#include <iostream>
using namespace std;


int binary_search(int*, int, int, int);

int binary_search(int arr[], int start, int end, int search)
{
    int mid = (start+end)/2;

    if (arr[mid] == search)
    {
        return mid;
    }
    else if (arr[mid] < search)
    {
        binary_search(arr, mid+1, end, search);
    }
    else
    {
        binary_search(arr, start, mid-1, search);
    }

    return -1;

}


int main()
{
    int len=0, n=0, search=0;

    cout<<"Please Enter the Length of the Array : ";
    cin>>len;

    int arr[len];
    cout<<"Enter the Elements : "<<endl;
    for(int i=0; i<len; i++)
    {
        cin>>n;
        arr[i] = n;
    }

    cout<<"Please enter the number you want to search : ";
    cin>>search;

    int start = 0, end=len;
    int pos = binary_search(arr, start, end, search);

    if (pos > 0)
    {
        cout<<"The element "<<search<<" was found at index "<<pos<<" .\n";
    }
    else
    {
        cout<<"The number is not present in the input array. :( "<<endl;
    }


   return 0;
}
