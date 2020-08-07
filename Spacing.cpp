#include<iostream>
#include<string.h>
using namespace std;
int main ()
{
    string str;
    int count = 1, i; 
    cout << "Enter a string : ";
   getline(cin,str);
    for (i = 0; i <=str.length() ;i++)
    {
        if (str[i] == ' ')
            count++;    
    }
    cout << "Number of words in the string are: " << count<<endl;
    return 0;
}
