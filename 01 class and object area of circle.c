Using namespace std;
#include<iostream>
#include<conio.h>


class Circle()
{
    public:

        float Radius,Area;

        Circle()
        {
            cout<<"in side Default constructer.."<<endl;

            Radius=0.0;
            Area=0.0;
        }
        void Calculate_Area()
        {
            const pi=3.14;

            Area=pi*Radius*Radius;
        }

        ~Circle()
        {
            cout<<"distructor called.  "<<endl;
            cout<<Area;

        }
};
int main()
{

     Circle obj;

     getch();

     cout<<"Radius =" << obj.Radius << " Area= " <<obj.Area<<endl;

     getch();

     obj.Radius=5.5;
     obj.Circle_Area();

     getch();
     cout<<"Area of Circle with radius "<<obj.Radius <<"is =" <<obj.Area <<endl;



    getch();
    return 0;
}
