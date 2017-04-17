#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

   ofSetFullscreen(false);
    
   ofBackground(0);
 //  ofDisableArbTex();
    
   shader.load("shaders/shader");
    
  // fbo.allocate(ofGetWidth(), ofGetHeight());
   img.load("img.jpg");

    
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

    ofSetWindowTitle(ofToString(ofGetFrameRate()));
    
    
  //  fbo.begin();
    shader.begin();
    shader.setUniform3f("iResolution", ofGetWidth(), ofGetHeight(),1);
    shader.setUniform1f("iGlobalTime", ofGetElapsedTimef()/2);
    shader.setUniform4f("iMouse",  mouseX,mouseY,0.0,0.0);
    shader.setUniform1f("iChannelTime[4]", ofGetElapsedTimef());
    shader.setUniform3f("iChannelResolution[4]",img.getWidth(),img.getHeight(),0.0);
    shader.setUniformTexture("iChannel0", img, 0);
    shader.setUniformTexture("iChannel1", img, 1);
    shader.setUniformTexture("iChannel2", img, 2);
    shader.setUniform4f("iDate", ofGetYear(), ofGetMonth(), ofGetDay(), ofGetSeconds());

    ofRect(0,0, ofGetWidth(), ofGetHeight());
    
    shader.end();
   /* fbo.end();
    
    ofPushMatrix();
    fbo.draw(0,0,ofGetWidth(), ofGetHeight());
    ofPopMatrix();*/
    

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
