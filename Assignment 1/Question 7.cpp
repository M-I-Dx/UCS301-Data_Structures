//Input preassumptions: The input array starts form a number lets say n1 and ends at n10.
//The arry should have all the elements form n1 to n10 except one such that n(i+1) -  ni = 1
//Example array [3, 4, 6, 7, 8]  Here 5 is the missine element.

#include <iostream>
using namespace std;


int fMissing (int arr[], int len)
{
  int start = arr[0], missing;
  for(int i=1; i<len; i++)
  {
    if (arr[i] != start + i)
    {
      missing = start + i;
      break;
    }
  }
  return missing;
}


int main()
{
  int arr[] = {3, 4, 6, 7, 8};
  int size = sizeof(arr)/sizeof(arr[0]);
  int missing_e;
  missing_e = fMissing(arr, size);
  cout << "The missing element is: " << missing_e<<endl;
  return 0;
}
