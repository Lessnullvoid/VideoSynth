#pragma once

#include "ofMain.h"
#include "ofxGui.h"


class ofApp : public ofBaseApp{
    

	public:
		void setup();
		void update();
		void draw();
        void draw2d();
        void draw3d();
        void stripePattern();
        void exit();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
    //-----------------------------Variables for gui
    ofxPanel gui;
    ofxIntSlider countX;
    ofxFloatSlider stepX;
    ofxFloatSlider twistX;
    bool showGui;
    
    //------------------------------Control sliders
    ofxGuiGroup globalGroup;
    ofxFloatSlider Scale;
    ofxFloatSlider Rotate;
    ofxFloatSlider Background;
    
    //------------------------------Control primitives
    ofxGuiGroup primGroup;
    ofxFloatSlider shiftY, rotate;
    ofxVec2Slider size;
    ofxColorSlider color;
    ofxToggle filled, type;
    
    //---------------------------------Matrix pattern
    ofxIntSlider countY;
    ofxFloatSlider stepY, twistY, pinchY;
    void matrixPattern();
    
    //---------------------------------Mixer control
    ofxGuiGroup mixerGroup;
    ofxFloatSlider imageAlpha, videoAlpha, cameraAlpha;
    
    //---------------------------------Raster Images
    ofTexture image;
    ofVideoPlayer video;
    ofVideoGrabber camera;
    
    //---------------------------------Offscreen buffer
    
    ofFbo fbo;
    ofShader shader;
    ofxToggle kenabled;
    ofxIntSlider ksectors;
    ofxFloatSlider kangle, kx, ky;
    
    //----------------------------------3D objects
    
    ofSpherePrimitive sphere;
    ofEasyCam cam;
    ofLight light;
    ofMaterial material;
    
    // ----------------------------------Texture
    ofFbo fbo2;
    
    //-------------------------------------2d/3d mixer

    ofxFloatSlider show2d, show3d;
    ofFbo fbo3d;
    ofxFloatSlider rad, deform, deformFreq, extrude;
    vector<ofPoint> vertices0;
    
    
    
    
    
    
    
    

    
  
    
    
    
    
    
    
    
    
		
};
