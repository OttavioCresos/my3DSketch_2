#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup() {

    ofEnableDepthTest();
    ofEnableLighting();
    light.setPointLight();
    light.setDiffuseColor(ofFloatColor(1.0, 1.0, 1.0));
    //light.setPosition(ofGetWidth() * .5, ofGetHeight() * .5, 300);
    light.setPosition(ofGetWidth()/2, ofGetHeight()/2, 500);
    light.enable();
    ofEnableNormalizedTexCoords();
    ofSetBackgroundColor(0, 0, 0);

    // put the table somewhere that we can see it:

    //myTable.setPosition(0, 0, 0);

    // put the shape somewhere that we can see it:
    myShape.setPosition(0, 0, 0);


    //walls, floor (textured):
    wall1.setTexture(ofImage("wall.jpg"));
    wall2.setTexture(ofImage("wall.jpg"));
    wall3.setTexture(ofImage("wall.jpg"));
    floor.setTexture(ofImage("floor.jpg"));

    wall1.setWidth(25);
    wall1.setHeight(775);
    wall1.setDepth(775);

    wall2.setWidth(25);
    wall2.setHeight(775);
    wall2.setDepth(775);

    wall3.setWidth(775);
    wall3.setHeight(775);
    wall3.setDepth(25);

    floor.setWidth(775);
    floor.setHeight(25);
    floor.setDepth(775);


}

//--------------------------------------------------------------
void ofApp::update(){
    //myTable.update();
    myShape.update();
    
}

//--------------------------------------------------------------
void ofApp::draw(){

    cam.begin();
    //axes:
    drawAxis();
    drawGrid();

    //myTable.draw();
    myShape.draw();
    //walls, floor:
    wall1.draw();
    wall2.draw();
    wall3.draw();
    floor.draw();

    cam.end();
	
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}


//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}

//--------------------------------------------------------------
//Draws an indicator of the x, y, z axis directions at the center of our screen
void ofApp::drawAxis() {
    ofPushStyle();

    // X = RED = sideways = WIDTH
    ofSetLineWidth(3);
    ofSetColor(255, 0, 0);
    ofDrawLine(0, 0, 0, 200, 0, 0);

    // Y = GREEN = upward and downward = HEIGHT
    ofSetLineWidth(3);
    ofSetColor(0, 255, 0);
    ofDrawLine(0, 0, 0, 0, 200, 0);

    // Z = BLUE = toward / backward from camera = DEPTH
    ofSetLineWidth(3);
    ofSetColor(0, 0, 255);
    ofDrawLine(0, 0, 0, 0, 0, 200);

    ofPopStyle();
}
//--------------------------------------------------------------
//Draws a grid of lines in the XZ plane
void ofApp::drawGrid() {
    ofPushStyle();
    ofPushMatrix();
    ofSetLineWidth(1);
    ofSetColor(200);
    float size = 100;
    int num = 8;
    // draw lines along the flat XZ plane
    for (int i = 0; i <= num; i++) {
        ofDrawLine((i * size) - (size * num / 2), 0, -size * num / 2, (i * size) - (size * num / 2), 0, size * num / 2);
        ofDrawLine(-size * num / 2, 0, (i * size) - (size * num / 2), size * num / 2, 0, (i * size) - (size * num / 2));
    }
    ofPopMatrix();
    ofPopStyle();
}
