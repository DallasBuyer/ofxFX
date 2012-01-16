//
// This example mix masked blur effect width an OldTv one
//
//

#pragma once

#include "ofMain.h"
#include "ofxFX.h"

class testApp : public ofBaseApp{
public:
    void setup();
    void update();
    void draw();

    void keyPressed  (int key);
    void keyReleased(int key);
    void mouseMoved(int x, int y );
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    void mouseReleased(int x, int y, int button);
    void windowResized(int w, int h);
    void dragEvent(ofDragInfo dragInfo);
    void gotMessage(ofMessage msg);
    
    ofVideoGrabber  video;
    ofImage     image;
    
    ofImage     maskImage;
    ofxMask     maskEffect;
    ofxBlur     blurEffect;
    ofxOldTv    oldTvEffect;
    
    float       beat;
    int         width, height;
};
