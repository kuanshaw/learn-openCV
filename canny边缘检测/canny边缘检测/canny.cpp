#include "highgui.h"
#include "cv.h"


using namespace cv;

int main()
{
	Mat srcImage = imread("F:\\1.jpg");
	imshow("canny边缘检测[原始图]", srcImage);		//显示原始图

	Mat dstImage, edge, grayImage;		//定义

	dstImage.create(srcImage.size(), srcImage.type() );			//创建与src同类型和大小的矩阵dst

	cvtColor(srcImage, grayImage, COLOR_BGR2GRAY);				//转换为灰度图像

	blur( grayImage, edge, Size(3,3) );		//降噪

	Canny(edge, edge, 3, 9, 3);				//canny算子？？？

	imshow("canny边缘检测[效果图]", edge);
	waitKey(0);

	return 0;
}