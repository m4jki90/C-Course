#include <iostream>
using namespace std;

int main()
{
    int n,i;
    cout<<"Enter number of elements: ";
    cin>>n;
    float sum,avg,num[n];
    
    for(i=0;i<n;i++)
    {
        cout << i+1 <<".Enter a number: ";
        cin >> num[i];
        sum+= num[i];
    }

    avg = sum / n;
    cout<<"Average = "<<avg;

    return 0;
}