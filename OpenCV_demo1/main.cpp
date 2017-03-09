#include <QApplication>

#include <opencv2/opencv.hpp>
#include <opencv/cv.h>
#include <opencv/cxcore.h>
#include <opencv/highgui.h>

using namespace cv;

int main(int argc, char *argv[])
{
    //声明IplImage指针
    IplImage*pImg;
    //载入图片
    //The file path need to be absolute path!
    pImg=cvLoadImage("~/OpenCV_demo1/th.jpg",1);
    //创建窗口
    cvNamedWindow("Image",1);
    //显示图像
    cvShowImage("Image",pImg);
    //等待按键
    cvWaitKey(0);
//    //销毁窗口
    cvDestroyWindow("Image");
    //释放图像
    cvReleaseImage(&pImg);
}
