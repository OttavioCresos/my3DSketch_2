#ifndef SHAPE_H
#define SHAPE_H

#include "ofMain.h"
class Shape
{
public:
	// class function members
	Shape();//constructor	
	~Shape();//destructor

	//tell the shape to update itself
	//Note - classes don't need an update function
	//but we have one here to follow the update-draw
	//'programming pattern' in openframeworks

	void update();
	//tell the shape to draw itself
	void draw();
	//position (CHECK IF NEEDS TO BE MODIFIED)
	void setPosition(float x, float y, float z);
		// end of class function members

private:
	//data members
	float xPos;
	float yPos;
	float zPos;

	ofBoxPrimitive leg1;
	ofBoxPrimitive leg2;
	ofBoxPrimitive leg3;
	ofBoxPrimitive leg4;
	ofBoxPrimitive seat;
	ofBoxPrimitive back;
};

#endif // SHAPE_H
