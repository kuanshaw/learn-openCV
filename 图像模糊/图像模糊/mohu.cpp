#include "highgui.h"
#include "cv.h"

using namespace cv;

int main(int agrc, char* agrv[])
{
	Mat srcImage = imread("F:\\1.jpg");

	imshow("均值滤波[原图]", srcImage);

	Mat dstImage;
	blur(srcImage, dstImage, Size(10,10));

	imshow("均值滤波[效果图]", dstImage);

	cvWaitKey(0);

	return 0;
}