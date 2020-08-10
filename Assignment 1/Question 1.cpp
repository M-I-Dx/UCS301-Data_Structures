
// Develop a Menu driven program to demonstrate the following operations of Arrays
// ——MENU——
// 1.CREATE
// 2.DISPLAY
// 3.INSERT
// 4.DELETE
// 5.SEARCH
// 6.EXIT


#include <iostream>
using namespace std;

int arr[100], len;

void create();
void display();
void insert();
void del();
void search();
int lr_search(int);

void create()
{
  cout<<"\nFirst we need to create an array!";
 	cout<<"\nEnter the size of the array: ";
  cin>>len;

  cout<<"\nEnter the elements of the array: "<<endl;

	int n = 0;
    for(int i=0; i<len; i++)
    {
		cin>>n;
		arr[i] = n;
    }

	cout<<endl;
}

void display()
{
  cout<<"Elements of the Array: "<<endl;
	for(int i=0; i<len; i++)
	{
 	    cout<<arr[i]<<" ";
    }
	cout<<endl<<endl;
}

void insert()
{	int elem, indx;

	cout<<"\nEnter the element that you want to insert: ";
  cin>>elem;
  cout<<"Enter the index at which you want to insert the element: ";
  cin>>indx;

	if (indx > len)
	{
        cout<<"ERROR!!!!"<<endl;
	}

	for(int i=len-1; i>=indx; i--)
	{
	    arr[i+1] = arr[i];
	}
	arr[indx] = elem;
	len = len+1;
}

void del()
{	int indx;

    cout<<"\nEnter the index of the element that you want to delete: ";
    cin>>indx;

	if (indx > len)
	{
        cout<<"ERROR!!!"<<endl;
	}

	for(int i=indx; i<=len-1; i++)
	{
	    arr[i] = arr[i+1];
	}
	len = len-1;
	cout<<endl;
}

int lr_search(int elem)
	{
		for(int i=0; i<len;i++)
		{
			if(arr[i] == elem)
			{
				return i;
				break;
			}
			else
			{
				continue;
			}
		}
		return -1;
	}

void search()
{
	cout<<endl;
	int elem=0;
	cout<<"\nEnter the element that you want to search: ";
	cin>>elem;

	int indx = lr_search(elem);
	if (indx != -1)
	{
		cout<<"Element present in array at index "<<indx<<"!"<<endl;
	}
	else
	{
		cout<<"Element not found"<<endl;
	}
	cout<<endl;
}

int main()
{
	int choice = 0;
	int exit = 1;

    do{
    	cout<<"--MENU--"<<endl;
		cout<<"1. Create\n2. Display\n3. Insert\n4. Delete\n5. Search\n6. Exit"<<endl;
    cout<< "What do you want to do? (Hint-Create an array first): ";
 		cin>>choice;

 		switch(choice)
 		{
	  	  case 1:create();
 			    break;
		    case 2:display();
			     break;
        case 3:insert();
			     break;
        case 4:	del();
			     break;
        case 5:	search();
			     break;
        case 6:	exit=0;
			     break;
        }
	}while(exit);

	return 0;
}
