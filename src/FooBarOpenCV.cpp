/*
 * FooBarOpenCV.cpp
 *
 *  Created on: Dec 6, 2018
 *      Author: Natesh
 */

#ifndef SRC_FOOBAROPENCV_CPP_
#define SRC_FOOBAROPENCV_CPP_

#include "FooBarOpenCV.h"

void FooBarOpenCV::write(const string filename){
	imwrite(filename, image_);
}


#endif /* SRC_FOOBAROPENCV_CPP_ */
