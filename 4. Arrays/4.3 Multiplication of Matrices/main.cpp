#include <iostream>
using namespace std;

int main()
{
    int i,j,x,y;

    cout << "Enter rows of first matrix: ";
    cin >> i;
    cout << "Enter columns of first matrix: ";
    cin >> j ;
    cout << "Enter rows of second matrix: ";
    cin >> x;
    cout << "Enter columns of second matrix: ";
    cin >> y ;
    
    while (j!=x)
    {
        cout << "Enter rows of first matrix: ";
        cin >> i;
        cout << "Enter columns of first matrix: ";
        cin >> j ;
        cout << "Enter rows of second matrix: ";
        cin >> x;
        cout << "Enter columns of second matrix: ";
        cin >> y ;
    }
    int a[i][j], b[x][y],c[i][y]={0};
    cout<< endl <<"Enter elements of matrix 1:"<<endl;
    for(int h=0;h<i;h++)
        for(int g=0;g<j;++g)
        {
            cout<<"Enter element a"<<h+1<<g+1<<" : ";
            cin >> a[h][g];
        }
    cout<<endl;
    cout<<endl<<"Enter elements of matrix 2:"<<endl;
    for(int t=0;t<x;t++)
        for(int o=0;o<y;++o)
        {
            cout<<"Enter element b"<<t+1<<o+1<<" : ";
            cin >> b[t][o];
        }
    for(int row=0;row<i;row++)
    {
        for(int column=0;column<y;column++)
        {
           for(int k=0;k<j;k++)
           {
                c[row][column] += a[row][k] * b[k][column];
           } 
        }
    }
    cout<<endl << "Output Matrix: "<<endl;
    for(int row = 0; row < i;row++)
    {
        for(int column = 0;column<y;column++)
        {
            cout<<" "<<c[row][column];
        }
        cout << endl;
    }
    return 0;
}