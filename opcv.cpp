#include<opencv2/opencv.hpp>
#include<iostream>
using namespace cv;
using namespace std;
int main()
{
	Mat imge = imread("kaneki.png");
	if (imge.empty())
	{
		cout << "CANNOT LOAD IMAGE" << endl;
		return 0;
	}
	string nameo = "ORIGINAL";
	imshow(nameo, imge);
	waitKey(0);
	rotate(imge, imge,ROTATE_90_CLOCKWISE);
	string namew = "ROTATING";
	namedWindow(namew);
	imshow(namew, imge);
	waitKey(0);
	destroyWindow(namew);
	destroyWindow(nameo);
	return 0;
}