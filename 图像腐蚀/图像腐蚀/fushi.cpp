#include "highgui.h"
#include "cv.h"

using namespace cv;

int main()
{
	//����
	Mat srcImage = imread("F:\\1.jpg");
	//��ʾ
	imshow("[ԭͼ]��ʴ����", srcImage);

	//���и�ʴ����
	Mat element = getStructuringElement(MORPH_RECT, Size(15,15));		//��ȡ�ṹԪ�أ�ָ����״���ߴ��Mat
	
	waitKey(0);

	Mat dstImage;	
	erode(srcImage, dstImage, element);		//��ʴ����

	imshow("[Ч��ͼ]��ʴ����", dstImage);	//��ʾ
	waitKey(0);

	return 0;
}