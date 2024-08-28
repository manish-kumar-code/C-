#include<iostream>
using namespace std;
class encapsulation
{
    private:
    int x;
    public:
    void set(int a)
    {
        x=a;
    }
    void get()
    {
        return x;
    }
};
int main()
{
    encapsulation obj;
    obj.set(5);
    cout<<obj.get();			
    return 0;
}