#include <iostream>
#include "RECTANGLE.H"

//constructor
RECTANGLE::RECTANGLE(){
   length;
   width ;
}
//overloaded constructor
RECTANGLE::RECTANGLE(float L,float width){
  length=0;
   width=0;
}
//destructor
RECTANGLE::~RECTANGLE(){

}
void RECTANGLE::setLength(float L){
       length=L; 
}
void RECTANGLE::setWidth(float W){
   width=W;
}
float RECTANGLE::getLength() const{
     return length;
}
float RECTANGLE::getWidth() const{
   return width;
}
float RECTANGLE::calculateArea() const{
   return  length * width;
   
}