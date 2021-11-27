#pragma once

#include "ofMain.h"
#include "table.h"
#include "superbox.h"
#include "shape.h"

class ofApp : public ofBaseApp {

public:
	void setup();
	void update();
	void draw();

	void keyPressed(int key);
	void keyReleased(int key);
	void mouseMoved(int x, int y);
	void mouseDragged(int x, int y, int button);
	void mousePressed(int x, int y, int button);
	void mouseReleased(int x, int y, int button);
	void mouseEntered(int x, int y);
	void mouseExited(int x, int y);
	void windowResized(int w, int h);
	void dragEvent(ofDragInfo dragInfo);
	void gotMessage(ofMessage msg);
private:
	// two helper functions into your code:
	//one which will draw an x, y, z axis indicator 
	//and one that will draw a grid in the XZ plane.
	void drawAxis();
	void drawGrid();

	ofEasyCam cam;
	ofLight light;
	Table myTable;
	Shape myShape;
	SuperBox wall1{ -400,0, 0 };
	SuperBox wall2{ 400, 0, 0 };
	SuperBox wall3{ 0, 0, -400 };
	SuperBox floor{ 0, -400, 0 };

};