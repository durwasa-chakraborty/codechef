#include "cv.h" //main OpenCV functions
#include "highgui.h" //OpenCV GUI functions¯include <stdio.h>
int main()
{
/* declare a new IplImage pointer, the basic
image data structure in OpenCV */
IplImage* newImg;
/* load an image named "apple.bmp", 1 means
this is a color image */
newImg = cvLoadImage("apple.bmp",1);
//create a new window
cvNamedWindow("Window", 1);
//display the image in the window
cvShowImage("Window", newImg);
//wait for key to close the window
cvWaitKey(0);
cvDestroyWindow( "Window" ); //destroy the window
cvReleaseImage( &newImg ); //release the memory for the image
return 0;