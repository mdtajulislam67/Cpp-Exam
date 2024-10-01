#include <bits/stdc++.h>
using namespace std;
class Student             
{
public:
    int ID;                      
    char name[100];        
    char section;
    int marks;
};
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        Student a, b, c;
        cin >> a.ID>>a.name>>a.section>>a.marks;
        cin >> b.ID>>b.name>>b.section>>b.marks;
        cin >> c.ID>>c.name>>c.section>>c.marks;

        if(a.marks > b.marks && a.marks > c.marks)
        {
            cout << a.ID<<" "<<a.name<<" "<<a.section<<" "<<a.marks<<endl;
        }
        else if(b.marks > a.marks && b.marks > c.marks)
        {
            cout << b.ID<<" "<<b.name<<" "<<b.section<<" "<<b.marks<<endl;
        }
        else if(c.marks > a.marks && c.marks > b.marks)
        {
            cout << c.ID<<" "<<c.name<<" "<<c.section<<" "<<c.marks<<endl;
        }
        if(a.marks == b.marks == c.marks )
        {
            if(a.ID<b.ID || a.ID<c.ID)
            {
                cout << a.ID<<" "<<a.name<<" "<<a.section<<" "<<a.marks<<endl;
            }
            else if(b.ID<a.ID || b.ID<c.ID)
            {
                cout << b.ID<<" "<<b.name<<" "<<b.section<<" "<<b.marks<<endl; 
            }
            else if(c.ID<a.ID || c.ID<b.ID)
            {
               cout << c.ID<<" "<<c.name<<" "<<c.section<<" "<<c.marks<<endl;
            }
        }
        if(a.marks==b.marks)
        {
           if(a.ID<b.ID)
            {
                cout << a.ID<<" "<<a.name<<" "<<a.section<<" "<<a.marks<<endl;
            }
        }
        if(b.marks==c.marks)
        {
           if(b.ID<c.ID)
            {
                cout << b.ID<<" "<<b.name<<" "<<b.section<<" "<<b.marks<<endl; 
            }
        }
        if(a.marks==c.marks)
        {
           if(a.ID<c.ID)
            {
                 cout << a.ID<<" "<<a.name<<" "<<a.section<<" "<<a.marks<<endl;
            }
        }

    }
}