#include<bits/stdc++.h>
using namespace std;
void one()
{
    int v;
    float c,p;
    cout<<"List of Options like 1.CGPA for 5 and 2.CGPA for 10"<<endl;
    cout<<"enter your choice : "<<endl;
    cin>>v;
    if(v==1)
    {
        cout<<"Enter the percentage : "<<endl;
        cin>>p;
        c = p/5/4;
        cout<<"Your CGPA is : ";
        printf("%.2f",c);
        cout<<endl;
    }
    else if(v==2)
    {
        cout<<"Enter the percentage : "<<endl;
        cin>>p;
        c = p/9.5;
        cout<<"Your CGPA is : ";
        printf("%.2f",c);
        cout<<endl;   
    }
    else
    {
        cout<<"Not Valid"<<endl;
    }
}
void two()
{
    int v;
    float c,p;
    cout<<"List of Options like 1.CGPA for 5 and 2.CGPA for 10"<<endl;
    cout<<"Enter your choice : "<<endl;
    cin>>v;
    if(v==1)
    {
        cout<<"Enter the CGPA : "<<endl;
        cin>>c;
        p = c*5*4;
        cout<<"Your Percentage is : ";
        cout<<round(p)<<endl;
    }
    else if(v==2)
    {
        cout<<"Enter the CGPA : "<<endl;
        cin>>c;
        p = c*9.5;
        cout<<"Your Percentage is : ";
        cout<<round(p)<<endl;
    }
    else
    {
        cout<<"Not Valid"<<endl;
    }
}
int main()
{
    int a = 1;
    while(a!=3)
    {
        cout<<"Listed Functions : "<<endl;
        cout<<"1.Percentage to CGPA"<<"\n"<<"2.CGPA to Percentage"<<"\n"<<"3.Exit"<<endl;
        cout<<"Enter your choice : "<<endl;
        cin>>a;
        switch(a)
        {
            case 1:
            {
                one();
                break;
            }
            case 2:
            {
                two();
                break;
            }
            case 3:
            {
                break;
            }
            default:
            {
                cout<<"Enter the correct value"<<endl;
            }
        }
    }
    return 0;
}