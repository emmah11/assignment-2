#ifndef TRIANGLE_H
#define TRIANGLE_H

class Triangle :public Rectangle{
public:
Triangle(int h,int b):Rectangle("Triangle",h, b ){}
Triangle():Rectangle("Triangle"){}
int area();
int Triangle::area(){
return(int)(0.5*Rectangle::area());
}
#endif