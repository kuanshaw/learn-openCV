#include "highgui.h"
#include "cv.h"

using namespace cv;

int main()
{
	//载入
	Mat srcImage = imread("F:\\1.jpg");
	//显示
	imshow("[原图]腐蚀操作", srcImage);

	//进行腐蚀操作
	Mat element = getStructuringElement(MORPH_RECT, Size(15,15));		//获取结构元素，指定形状、尺寸的Mat
	
	waitKey(0);

	Mat dstImage;	
	erode(srcImage, dstImage, element);		//腐蚀操作

	imshow("[效果图]腐蚀操作", dstImage);	//显示
	waitKey(0);

	return 0;
}