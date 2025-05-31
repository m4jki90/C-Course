#include <iostream>
#include <string>
using namespace std;

class Student
{
    int roll;
    string name;
    int maths;
    int physics;
    int english;
public:
    Student(int r,string n,int m,int p,int e)
    {
        roll=r;
        name=n;
        maths=m;
        physics=p;
        english=e;
    }
    int total()
    {
        return maths + physics + english;
    }
    char grade()
    {
        float average = total()/3;
        if(average>60)
            return 'A';
        else if(average>=40)
            return 'B';
        else 
            return 'C';
    }
};
int main()
{
    int roll,m,p,e;
    string name;
    cout<<"Enter Roll number of a Student: ";
    cin>>roll;
    cout<<"Enter Name of a Student: ";
    cin>>name;
    cout<<"Enter marks in 3 subjects: ";
    cin>>m>>p>>e;
    Student s(roll,name,m,p,e);
    cout<<"Total marks: "<<s.total()<<endl;
    cout<<"Student's grade: "<<s.grade()<<endl;
    return 0;
}
