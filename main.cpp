// main.cpp
// Created on: Feb 19, 2018
// Author: smcguffee

#include "main.h"

#include <opencv2/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <iostream>
#include <string>
using namespace cv;
using namespace std;

int main( int argc, char** argv )
{
    String imageName( "" ); // by default
    if( argc > 1)
    {
        imageName = argv[1];
    }
    else
    {
        cerr << "Usage: " << argv[0] << " imageFile" << endl;
    }
    Mat image;
    image = imread( imageName, IMREAD_COLOR ); // Read the file
    if( image.empty() )                      // Check for invalid input
    {
        cout <<  "Could not open or find the image" << std::endl ;
        return -1;
    }
    namedWindow( "Display window", WINDOW_AUTOSIZE ); // Create a window for display.
    imshow( "Display window", image );                // Show our image inside it.
    waitKey(0); // Wait for a keystroke in the window
    return 0;
}
