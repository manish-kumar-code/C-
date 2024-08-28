#include<iostream>
using namespace std;
class Marks
{
    private:
    int num,i;
    float marks;
    char name;
    public:
    void set()
    {
        for(i=1;i<11;i++)
    cout<<"Roll Number-"<<endl;
    cin>>num;
    cout<<"Name-"<<endl;
    cin>>name;
    cout<<"Marks-"<<endl;
    cin>>marks;}
};
class Physics: public Marks
{
    private:
    float marks;
    public:
    void dis()
    {cout<<"Enter marks of each student:"<<endl;
    cin>>marks;}
};
class Chemistry: public Marks
{
    private:
    float marks;
    public:
    void dis1()
    {cout<<"Enter marks of each student:"<<endl;
    cin>>marks;}
};
class Mathematics: public Marks
{
    private:
    float marks;
    public:
    void dis2()
    {cout<<"Enter marks of each student:"<<endl;
    cin>>marks;}
};
int main()
{
    Physics a;
    Chemistry b;
    Mathematics c;
    a.dis();
    b.dis1();
    c.dis2();
    return 0;
}