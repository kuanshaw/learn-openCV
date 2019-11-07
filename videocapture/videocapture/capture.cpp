#include "opencv.hpp"


using namespace cv;

int main()
{
	//VideoCapture capture("F:\\1.avi");		//视频读取

	VideoCapture capture(0);		//摄像头读取，初始化

	Mat edges;
	printf("\t当前使用的OpenCV版本为 Opencv "CV_VERSION);
	while(1)
	{
		Mat frame;
		capture>>frame;

		//边缘检测
		cvtColor(frame, edges, CV_BGR2GRAY);	//转换成灰度
		blur(edges, edges, Size(7,7));		//降噪
		Canny(edges, edges, 0, 30, 3);		//边缘检测

		//imshow("读取视频", frame);
		imshow("Canny后的视频", edges);
		if(waitKey(30)>=0)
		{
			break;
		}
	}

	
	return 0;
}

