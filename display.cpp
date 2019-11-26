#include "display.h"

#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <iostream>

using namespace cv;
using namespace std;



display::display()
{
    Mat image=imread("D:\\Img_Projet_Vision\\IMG_2366.jpg");
    namedWindow("My Image");
    imshow("My Image",image);
    waitKey(0);
// jade or labite
}
