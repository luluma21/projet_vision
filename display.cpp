#include "display.h"

#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <iostream>

using namespace cv;
using namespace std;



display::display()
{
    Mat image=imread("image_2366.jpeg");
    namedWindow("My Image");
    imshow("My Image",image);
    waitKey(0);

}
