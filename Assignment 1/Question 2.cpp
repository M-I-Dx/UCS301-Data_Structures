#include<iostream>
using namespace std;
int main ()
{
int i, n, count, c, j;
count = 0;
cout << "Enter the size\n";
cin >> n;
cout << "Enter the elements\n";
int a[n];
for (i = 0; i < n; i++)
{
  cin >> a[i];
}

for (i = 0; i < n; i++)
{
  for (j = i + 1; j < n; j++)
  {
      if (a[i] == a[j])
      {
          count++;
          c = a[n - 1];
          a[n - 1] = a[j];
          a[j] = c;
          n -= count;
      }
  }
  count = 0;
}
for (i = 0; i < n; i++)
  {
  cout<<a[i]<<" ";
  }
}
