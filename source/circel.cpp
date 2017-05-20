#include "circel.hpp"

//Constructor
Circle::Circle (float radius):
	radius_{radius}
	{}
Circle::Circle ():
	radius_{1}
	{}

float Circle::getRadius() const
{
	return radius_;
}

void Circle::setRadius(float r)
{
	radius_ = r;
}


//  == gleich
bool Circle::operator == (Circle const& c)const{
	return radius_ == c.getRadius();
}

	// < kleiner 
bool Circle::operator < (Circle const& c)const{
	return radius_ < c.getRadius();
}

	//  > groesser
bool Circle::operator > (Circle const& c)const{
	return radius_ > c.getRadius();
} 
// kleiner gleich
bool Circle::operator <= (Circle const& c)const{
	return radius_ <= c.getRadius();
}








