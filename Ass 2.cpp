#include <iostream>
 using namespace std;
 
 class vehical{
     public:
     void vehica(){
         cout<<"l am a vehicle"<<endl;
     }
 };
 class twowheel:public vehical{
     public:
     void twowhee(){
         cout<<"I have two wheels"<<endl;
     }
 };
 class car:public twowheel{
     public:
     void ca(){
         cout<<"I am a car"<<endl;
     }
 };

int main()
{
    car c1;
    c1.ca();
    c1.vehica();
    c1.twowhee();

return 0;
}