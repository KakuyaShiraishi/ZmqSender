#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    sender = ofPtr<ofxZmqPublisher>(new ofxZmqPublisher);
    //sender -> setHighWaterMark(20);
    sender -> bind(string("tcp://*:") + "1234");
    
    test.load("kakuya.png");
}

//--------------------------------------------------------------
void ofApp::update(){
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    test.draw(0, 0);
}

//--------------------------------------------------------------
void ofApp::send(ofImage img){
    ofBuffer imgbuf;
    ofSaveImage(img.getPixels() , imgbuf);
    sender -> send(imgbuf);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if(key == ' '){
        send(test);
    }
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
