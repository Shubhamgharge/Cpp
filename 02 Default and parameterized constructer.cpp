using namespace std;
#include<iostream>
#include<conio.h>

class Circle
{
    public:

    float Radius,Area;

    Circle()
    {
        cout<<"inside default constructer.."<<endl;
        Radius=0.0;
        Area=0.0;
    }

    Circle(float r)
    {
        cout<<"inside parameterized constructr.."<<endl;
        Radius=r;
        Area=0.0;
    }

    void Calculate_Area()
    {
        const float pi=3.14;

        Area=pi*Radius*Radius;
    }

    ~Circle()
    {
        cout<<"inside Distructer..             "<<endl;
        cout<<Area<<endl;
    }
};
int main()
{

    Circle obj1;

    getch();

    cout<<"Radius = "<<obj1.Radius<<endl<<"Area="<<obj1.Area<<endl<<endl;

    getch();

    obj1.Radius=2.5;
    obj1.Calculate_Area();

    cout<<"Area of ciircle with Radius="<<obj1.Radius<<"is ="<<"Area="<<obj1.Area<<endl<<endl;

    getch();

    Circle obj2(5.52);

    getch();

    cout<<"Radius "<< obj2.Radius<<endl<<"Area="<<obj2.Area<<endl<<endl;
    getch();
    obj2.Calculate_Area();
    cout<<"Area of circle with radius "<<obj2.Radius<<"is="<<obj2.Area<<endl<<endl;


    getch();
    return 0;
}
