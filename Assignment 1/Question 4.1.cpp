# include <iostream>
using namespace std;

void display(int*, int);
void reverse_array(int*, int);

void display(int arr[], int len)
{
	for(int i=0; i<len; i++)
	  {
 	    cout<<arr[i]<<"  ";
    }
	cout<<endl;
}

void reverse_array(int arr[], int len)
{
    int temp[len], j=0;
    for(int i=len-1;i>=0;i--)
    {
        temp[j++] = arr[i]; //Saving contents of arr in reverse order
    }

    for(int i=0;i<len;i++)
    {
        arr[i] = temp[i]; //Changing the elements of arr
    }
}

int main()
{
    int len=0, n=0;
    cout<<"\nEnter the size of the array: ";
    cin>>len;
    int arr[len];
    cout<<"\nEnter the elements of the array : "<<endl;
    for(int i=0; i<len; i++)
    {
		cin>>n;
		arr[i] = n;
    }
	  cout<<endl;
    cout<<"Original order of elements of the input array:"<<endl;
    display(arr, len);

    reverse_array(arr, len);
    cout<<"Changed order of the elements of the input array:"<<endl;
    display(arr, len);

    return 0;
}
