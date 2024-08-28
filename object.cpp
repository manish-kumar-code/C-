#include<iostream>
using namespace std;
class person 
{
   char name[20];
   int id;
   public:
   void getdetails(int x) {}
};
int main()
{
    person p1; // p1 is a object
    p1.getdetails(10);
    return 0;
}
