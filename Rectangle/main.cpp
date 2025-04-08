#include <iostream>
#include "rectangle.h"


int main(){
   RECTANGLE r;
   RECTANGLE R; //class of overloaded constructor

   float length,width;
   std::cout << " Enter length of the rectangle:" << '\n';
   std::cin >> length;
   std::cout << " Enter the width of the rectangle :" << '\n';
   std::cin >> width;

   r.setLength(5);
   r.setWidth(4);

   //setting values for the overloaded constructor
   R.setLength(length); 
   R.setWidth(width);



   std::cout << " The area of the rectangle is :" <<r.calculateArea() <<std::endl;

   //printing values for the overloaded constructor
   std::cout << " The area of the rectangle is :" << R.calculateArea() << std::endl;
   return 0;
}