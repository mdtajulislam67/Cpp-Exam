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
        
        else if(a.marks==b.marks)
            {
                cout << a.ID<<" "<<a.name<<" "<<a.section<<" "<<a.marks<<endl;
            }
        else if(b.marks==c.marks)
            {
                cout << b.ID<<" "<<b.name<<" "<<b.section<<" "<<b.marks<<endl; 
            }
        else if(a.marks==c.marks)
            {
                 cout << a.ID<<" "<<a.name<<" "<<a.section<<" "<<a.marks<<endl;
            }
        

    }
}