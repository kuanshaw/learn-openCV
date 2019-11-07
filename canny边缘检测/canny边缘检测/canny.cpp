#include "highgui.h"
#include "cv.h"


using namespace cv;

int main()
{
	Mat srcImage = imread("F:\\1.jpg");
	imshow("canny��Ե���[ԭʼͼ]", srcImage);		//��ʾԭʼͼ

	Mat dstImage, edge, grayImage;		//����

	dstImage.create(srcImage.size(), srcImage.type() );			//������srcͬ���ͺʹ�С�ľ���dst

	cvtColor(srcImage, grayImage, COLOR_BGR2GRAY);				//ת��Ϊ�Ҷ�ͼ��

	blur( grayImage, edge, Size(3,3) );		//����

	Canny(edge, edge, 3, 9, 3);				//canny���ӣ�����

	imshow("canny��Ե���[Ч��ͼ]", edge);
	waitKey(0);

	return 0;
}