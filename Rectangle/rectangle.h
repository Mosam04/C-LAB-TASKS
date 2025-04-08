#ifndef RECTANGLE_H
#define RECTANGLE_H
#pragma once


class RECTANGLE{
    private:
    float length;
    float width;
    public:
    RECTANGLE();// constructor
    RECTANGLE(float length,float width);
    ~RECTANGLE();
    void setLength(float L);
    void setWidth(float W);
    float getLength() const;
    float getWidth() const;
    float calculateArea() const; 
};

#endif