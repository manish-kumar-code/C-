#include<iostream>
using namespace std;
class Result
{
    public:
    void volume(int a)
    {
        float temp;
        temp = a*a*a;
        cout<<"Volume of Cube : "<<temp<<endl;
    }
    void volume(int r,int h)
    {
        float temp1;
        temp1 = 3.14*r*r*h;
        cout<<"Volume of Cylinder : "<<temp1<<endl;
    }
    void volume(float s)
    {
        float temp2;
        temp2 = 1.33*3.14*s*s*s;
        cout<<"Volume of Sphere : "<<temp2<<endl;
    }
};
int main()
{
    int a,b,c;
    float d;
    cout<<"Enter the side of Cube : ";
    cin>>a;
    cout<<"Enter the radius and height of Cylinder : ";
    cin>>b>>c;
    cout<<"Enter the radius of Sphere : ";
    cin>>d;
    Result obj;
    obj.volume(a);
    obj.volume(b,c);
    obj.volume(d);
    return 0;
}