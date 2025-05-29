#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str="WELCOME";
    string::iterator it;
    for(it=str.begin();it!=str.end();it++)
    {
        *it += 32;
    }
    cout<<str;
}