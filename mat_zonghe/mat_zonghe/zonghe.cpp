
#include <highgui/highgui.hpp>

#include <core/core.hpp>

using namespace cv;

int main()
{
	//ͼ����ʾ
	Mat mat_logo = imread("F:\\hello.jpg");
	namedWindow("ԭͼ");

	imshow("ԭͼ", mat_logo);

	//ͼ���ں�
	Mat mat_resoure = imread("F:\\2.jpg", 199);
	Mat imageROI;				//���ڴ�ţ�ͼ���ROI

	imageROI = mat_resoure(Rect(300, 0, mat_logo.cols, mat_logo.rows));			//imageROI��������Դͼ��resource����洢�������Դ˺���imageROI�ϵĲ���Ҳ��������Դͼ��image��  

	addWeighted(imageROI, 0.6, mat_logo, 0.6, 0, imageROI);		//�ϳ�

	namedWindow("����ͼ");
	imshow("����ͼ", mat_resoure);


	//ͼ�����
	imwrite("����ͼ.jpg", mat_resoure);

	waitKey(0);

	return 0;

}

