#include <iostream>
#include <string>
using namespace std;

int main()
{
    int count=0;
    string str="Welcome";
    for(int x=0;str[x]!='\0';x++)
    {
        count++;
    }
    cout<<count;
    return 0;
}
