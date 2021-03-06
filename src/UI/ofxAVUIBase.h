//
//  ofxAVUIBase.h
//
//  Part of ofxAVUI addon. Developed by Nuno Correia and Borut Kumperscak in 2016.
//  https://github.com/AVUIs/ofxAVUI
//

#ifndef ofxAVUIBase_h
#define ofxAVUIBase_h

#include "ofMain.h"

class ofxAVUIBase {

public:
    ofxAVUIBase();
    virtual ~ofxAVUIBase();
    virtual void setPosition(int _x, int _y, int _width, int _height);
    ofRectangle  getPosition();
    void setColor(ofColor _bgColor, ofColor _fgColor);
    void setTitle(string _title);
    void bindProperties(ofParameterGroup *_soundProperties);
    void drawContour(); //specific ofxAVUI contour shape
    void drawTitle();
    virtual void update() {};
    virtual void draw() = 0;
    
    virtual void mouseMoved(ofMouseEventArgs & args) = 0;
    virtual void mousePressed(ofMouseEventArgs & args) = 0;
    virtual void mouseDragged(ofMouseEventArgs & args) = 0;
    virtual void mouseReleased(ofMouseEventArgs & args) = 0;
    virtual void mouseScrolled(ofMouseEventArgs & args) = 0;
    virtual void mouseEntered(ofMouseEventArgs & args) {}
    virtual void mouseExited(ofMouseEventArgs & args) {}

protected:
    ofRectangle         getBitmapStringBoundingBox(string text);
    ofRectangle         shape;
    ofColor             bgColor, fgColor;
    string              title;
    ofParameterGroup   *soundProperties;
    bool                synced;
};

#endif /* ofxAVUIBase_h */
