#include<iostream>
using namespace std;
class largest
{
    private:
    int a,b,c;
    public:
    void set()
    {
        cout<<"Enter the numbers a,b & c : ";
        cin>>a>>b>>c; 
    }
    void display()
    {
        if((a>b) && (a>c))
        cout<<a<<"is largest.";
        if((b>c) && (b>a))
        cout<<b<<"is largest.";
        if((c>a) && (c>b))
        cout<<c<<"is largest.";    
    }
};
int main()
{
    largest obj;
    obj.set();
    obj.display();
    return 0;
}