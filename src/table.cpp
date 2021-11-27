#include "table.h"

Table::Table()
{
    // leg1,2,3,4 are all box 
    // primitives
    // Calling setParent
    // allows us to link 
    // the legs to the tableTop
    // so transformations applied to tableTop
    // are automatically applied to the legs
    leg1.setParent(tableTop);
    leg2.setParent(tableTop);
    leg3.setParent(tableTop);
    leg4.setParent(tableTop);
    // these positions are relative to the tabletop
    leg1.setPosition(-200, -100, 150);
    leg2.setPosition(200, -100, 150);
    leg3.setPosition(-200, -100, -150);
    leg4.setPosition(200, -100, -150);
    leg1.setHeight(200);
    leg2.setHeight(200);
    leg3.setHeight(200);
    leg4.setHeight(200);
    leg1.setWidth(50);
    leg2.setWidth(50);
    leg3.setWidth(50);
    leg4.setWidth(50);
    leg1.setDepth(50);
    leg2.setDepth(50);
    leg3.setDepth(50);
    leg4.setDepth(50);
    tableTop.setWidth(500);
    tableTop.setDepth(500);
    tableTop.setHeight(50);
}

Table::~Table()
{
    // nothing to do here - once we find out about
    // pointers, there will be more to do in the 
    // destructor
}

void Table::setPosition(float x, float y, float z)
{
    // note that we do not need to set the pos
    // on the legs as they are 'linked' to the 
    // table
    
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

    tableTop.setPosition(xPos, yPos, zPos);
}

void Table::update()
{
    // we can implement animation (state change)
    // in the update function
    tableTop.rotateDeg(0.5, 0, 0.5, 0);
}

void Table::draw()
{
    // call draw on all the prims 
    leg1.draw();
    leg2.draw();
    leg3.draw();
    leg4.draw();
    tableTop.draw();
}
