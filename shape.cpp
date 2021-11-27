#include "shape.h"

Shape::Shape()
{
    // leg1,2,3,4 are all box 
// primitives
// Calling setParent
// allows us to link 
// the legs to the seat
// so transformations applied to seat
// are automatically applied to the legs
    leg1.setParent(seat);
    leg2.setParent(seat);
    leg3.setParent(seat);
    leg4.setParent(seat);
    back.setParent(seat);
    // these positions are relative to the seat
    leg1.setPosition(-200, -100, 150);
    leg2.setPosition(200, -100, 150);
    leg3.setPosition(-200, -100, -150);
    leg4.setPosition(200, -100, -150);
    back.setPosition(0, 225, -225);
    leg1.setHeight(250);
    leg2.setHeight(250);
    leg3.setHeight(250);
    leg4.setHeight(250);
    back.setHeight(500);
    leg1.setWidth(50);
    leg2.setWidth(50);
    leg3.setWidth(50);
    leg4.setWidth(50);
    back.setWidth(500);
    leg1.setDepth(50);
    leg2.setDepth(50);
    leg3.setDepth(50);
    leg4.setDepth(50);
    back.setDepth(50);
    seat.setWidth(500);
    seat.setDepth(500);
    seat.setHeight(50);
}

Shape::~Shape()
{
    // nothing to do here - once we find out about
// pointers, there will be more to do in the 
// destructor
}

void Shape::setPosition(float x, float y, float z)
{
    // note that we do not need to set the pos
// on the legs as they are 'linked' to the seat

// technically we don't need to store
// the position as the ofBoxPrimitive
// class actually stores its own position
// but we'll do it 

// example of checking data coming in:
// rule of thumb - don't trust data
// coming in to your functions!
    if (x < 5000 && x > 0) xPos = x;
    // you could check the others if you want...
    yPos = y;
    zPos = z;

    seat.setPosition(xPos, yPos, zPos);
}

void Shape::update()
{
    // we can implement animation (state change)
    // in the update function
    seat.rotateDeg(0.5, 0, 0.5, 0);
}

void Shape::draw()
{
    // call draw on all the prims 
    leg1.draw();
    leg2.draw();
    leg3.draw();
    leg4.draw();
    seat.draw();
    back.draw();
}