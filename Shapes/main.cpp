#include "shapes.h"
#include <iostream>
using namespace std;

int main(){
    double length,base,height,radius;
    cout << " Enter the length:" << endl;
    cin >> length;
   shapes::Square sq1;
   shapes::Square sq2(4); //overloaded

   sq1.setSideLength(length);

   cout << "Area of the square of length "<< length << sq1.getAreaSquare() <<endl;
  
   cout << " Enter the base and the height :" <<endl;
   cin>>base,height;
   shapes::Triangle t1;
   shapes::Triangle t2(2,3);

   t1.setBase(base);
   t1.setHeight(height);
   cout <<" Area of the triangle of "<< base << " and " << height << " is :" << t1.getAreaTriangle() <<endl; 
  
   cout << " Enter the radius :" <<endl;
   cin >> radius;
   shapes::Circle r1;
   shapes::Circle r2(5);

   r1.setRadius(radius);
   cout << " The area of the circle of radius " << radius << " is " << r1.getAreaCircle() << endl;
   return 0;
}