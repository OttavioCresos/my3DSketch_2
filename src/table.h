#ifndef TABLE_H
#define TABLE_H

#include "ofMain.h"

class Table
{
public:
    Table();
    ~Table();
    // class function members

    /** tell the table to update itself 
     * Note - classes don't need an update function
     * but we have one here to follow the update-draw 
     * 'programming pattern' in openframeworks 
    */
    void update();
    /** tell the table to draw itself */
    void draw();
    void setPosition(float x, float y, float z);
    // end of class function members
private:
// data members
    float xPos;
    float yPos;
    float zPos;
    ofBoxPrimitive leg1;
    ofBoxPrimitive leg2;
    ofBoxPrimitive leg3;
    ofBoxPrimitive leg4;
    ofBoxPrimitive tableTop;
};

#endif // TABLE_H
