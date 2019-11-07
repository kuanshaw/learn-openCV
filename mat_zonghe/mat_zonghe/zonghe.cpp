
#include <highgui/highgui.hpp>

#include <core/core.hpp>

using namespace cv;

int main()
{
	//图像显示
	Mat mat_logo = imread("F:\\hello.jpg");
	namedWindow("原图");

	imshow("原图", mat_logo);

	//图像融合
	Mat mat_resoure = imread("F:\\2.jpg", 199);
	Mat imageROI;				//用于存放，图像的ROI

	imageROI = mat_resoure(Rect(300, 0, mat_logo.cols, mat_logo.rows));			//imageROI的数据与源图像resource共享存储区，所以此后在imageROI上的操作也会作用在源图像image上  

	addWeighted(imageROI, 0.6, mat_logo, 0.6, 0, imageROI);		//合成

	namedWindow("生成图");
	imshow("生成图", mat_resoure);


	//图像输出
	imwrite("生成图.jpg", mat_resoure);

	waitKey(0);

	return 0;

}

