/*
 * FooBarOpenCV.h
 *
 *  Created on: Dec 6, 2018
 *      Author: Natesh
 */

#ifndef SRC_FOOBAROPENCV_H_
#define SRC_FOOBAROPENCV_H_

#include "string.h"

#include "opencv2/opencv.hpp"

using namespace cv;
using namespace std;

class FooBarOpenCV {
private:
	Mat image_;

public:
	FooBarOpenCV(const Mat& img):image_(img){};

	void write(const string filename);
};




#endif /* SRC_FOOBAROPENCV_H_ */
