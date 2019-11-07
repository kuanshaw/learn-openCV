#include "opencv.hpp"


using namespace cv;

int main()
{
	//VideoCapture capture("F:\\1.avi");		//��Ƶ��ȡ

	VideoCapture capture(0);		//����ͷ��ȡ����ʼ��

	Mat edges;
	printf("\t��ǰʹ�õ�OpenCV�汾Ϊ Opencv "CV_VERSION);
	while(1)
	{
		Mat frame;
		capture>>frame;

		//��Ե���
		cvtColor(frame, edges, CV_BGR2GRAY);	//ת���ɻҶ�
		blur(edges, edges, Size(7,7));		//����
		Canny(edges, edges, 0, 30, 3);		//��Ե���

		//imshow("��ȡ��Ƶ", frame);
		imshow("Canny�����Ƶ", edges);
		if(waitKey(30)>=0)
		{
			break;
		}
	}

	
	return 0;
}

