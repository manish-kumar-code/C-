#include<iostream>
using namespace std;
class Mammals
{
    public:
    void dis()
   {cout<<"I am mammals."<<endl;}
};
class MarineAnimals
{
    public:
    void dis1()
    {cout<<"I am marine animals."<<endl;}
};
class BlueWhale: public Mammals,public MarineAnimals
{
    public:
    void dis2()
    {cout<<"I belong to both the categories: Mammals as well as Marine Animals."<<endl;}
};
int main()
{
    Mammals obj;
    MarineAnimals obj1;
    BlueWhale obj2;
    obj.dis();
    obj1.dis1();
    obj2.dis2();
    obj2.dis();
    obj2.dis1();
    obj2.dis2();
    return 0;
}