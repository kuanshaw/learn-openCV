#include "highgui.h"
#include "cv.h"

using namespace cv;

int main(int agrc, char* agrv[])
{
	Mat srcImage = imread("F:\\1.jpg");

	imshow("��ֵ�˲�[ԭͼ]", srcImage);

	Mat dstImage;
	blur(srcImage, dstImage, Size(10,10));

	imshow("��ֵ�˲�[Ч��ͼ]", dstImage);

	cvWaitKey(0);

	return 0;
}