#include <iostream>
using namespace std;

int main()
{
    float total,discount;
    cout<<"Enter total: ";
    cin>>total;
    if(total>=500)
    {
        discount=total*0.2;
    }
    else if(total>=100 && total<500)
    {
        discount=total*0.1;
    }

    cout<<"Bill amount is: "<<total<<endl;
    cout<<"Discount is: "<<discount<<endl;
    cout<<"price after discount is "<<total-discount<<endl;
    return 0;
}