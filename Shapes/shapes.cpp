#include <iostream>
#include "shapes.h"
//squares
 shapes::Square::Square(){
  SideLength;
}
shapes::Square::Square(double Length){
    Length=0;
}
shapes::Square::~Square(){//destructor

}
void::shapes::Square::setSideLength(double Length){
       Length=SideLength;
}
double::shapes::Square::getAreaSquare() const{
    return SideLength*SideLength;
}
//squares
shapes::Triangle::Triangle(){
    Base,Height;
}
shapes::Triangle::Triangle(double Base,double Height){
   Base =0;
   Height=0;
}
shapes::Triangle::~Triangle(){
    //destructor
}
void::shapes::Triangle::setBase(double B){
     B=Base;
}
void::shapes::Triangle::setHeight(double H){
   H=Height;
}
double::shapes::Triangle::getAreaTriangle() const{
    return Base *Height;
}
/*double::shapes::Triangle::getHeight() const{
    return Height;
}*/
//Circles
shapes::Circle::Circle(){ //default constructor
    Radius;
}
shapes::Circle::Circle(){//overloaded constructor
    Radius=0;
}
shapes::Circle::~Circle(){
    //destructor
}
void::shapes::Circle::setRadius(double radius){
      radius=Radius;
}
double::shapes::Circle::getAreaCircle() const{
    return Radius*Radius*3.14;
}
