#include <iostream>
using namespace std;
int main ()
{ 
 int i;
 int n;
 int even=0 ;
 int odd=0 ;
cout << "Please enter total numbers";
cin >> n; 
int array [n];
for (i=0 ; i<n ;i++ )
{
cin >> array [i];

    if (array [i]%2==0)
    {
 even++;
}
else 
odd++;
}
cout<<"even:"<<even<<"   odd:"<<odd<<endl;
return 0;
}

