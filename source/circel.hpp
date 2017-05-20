
#ifndef CIRCEL_HPP
#define CIRCEL_HPP


class Circle
{
public:
	Circle (float radius);
	Circle ();

	float getRadius() const;
	void setRadius(float r);




//Operatoren
	bool operator == (Circle const& c) const;
	bool operator < (Circle const& c) const;
	bool operator > (Circle const& c) const;
	bool operator <= (Circle const& c) const;


	private:
	float radius_;
};


#endif