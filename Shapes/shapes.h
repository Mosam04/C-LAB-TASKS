#ifndef SHAPES_H
#define SHAPES_H

using namespace std;

namespace shapes{

    class Square{
        private:
       double SideLength;
       public:
       Square();//default constructor
       Square(double Length);//overloaded constructor
       ~Square();//destructor
       void setSideLength(double Length);
       double getAreaSquare() const;
    };
    class Triangle{
    private:
    int Base,Height;
    public:
    Triangle();//default constructor
    Triangle(double Base,double Height);//overloaded constructor
    ~Triangle();//destructor
    void setBase(double Base);
    void setHeight(double Height);
   // double getHeight() const;
    double getAreaTriangle() const;
    
    };
    class Circle{
      private:
      int Radius;
      public:
      Circle();
      Circle(double radius);
      ~Circle();
      void setRadius(double radius);
      double getAreaCircle() const;

    };
}

#endif
