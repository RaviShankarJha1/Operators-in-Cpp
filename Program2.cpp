#include<iostream>
using namespace std;
int main()
{
    float m1,m2,m3,m4,avg_marks;
    cout<<"enter marks of the student"<<endl;
    cout<<"marks of Physics"<<endl;
    cin>>m1;
    cout<<"marks of Maths"<<endl;
    cin>>m2;
    cout<<"marks of Chemistry"<<endl;
    cin>>m3;
    cout<<"marks of IP"<<endl;
    cin>>m4;
    avg_marks=(m1+m2+m3+m4)/4;
    if(avg_marks>=90)
    cout<<"Grade=A+";
    else if(avg_marks<90 && avg_marks>=85)
    cout<<"Grade=A";
    else if(avg_marks<85 && avg_marks>=75)
    cout<<"Grade=B+";
    else if(avg_marks<75 && avg_marks>=65)
    cout<<"Grade=B";
    else if(avg_marks<65 && avg_marks>=55)
    cout<<"Grade=C";
    else if(avg_marks<55 && avg_marks>=45)
    cout<<"Grade=D";
    else
    cout<<"Fail";
}
