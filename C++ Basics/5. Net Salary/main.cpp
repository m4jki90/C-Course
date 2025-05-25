#include <iostream>
using namespace std;

int main()
{
    float salary,basic,percofa,percofd;
    cout << "Enter Basic Salary: ";
    cin >> basic;
    cout <<"Enter Percentage of Allowances: ";
    cin >> percofa;
    cout<<"Enter Percentage of Deductions: ";
    cin >> percofd;

    salary = basic + basic * (percofa / 100) - basic * (percofd / 100);
    cout <<"Net Salary is "<<salary<<endl;
    return 0;
}