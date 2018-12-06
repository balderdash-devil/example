/*
 * FooBar.h
 *
 *  Created on: Dec 4, 2018
 *      Author: Natesh
 *      Description : An Example of a simple class
 */

#ifndef SRC_FOOBAR_H_
#define SRC_FOOBAR_H_

class FooBar{
private:
	int a_;
public:
	FooBar(int a):a_(a){};

	int sum(int b);
};

#endif /* SRC_FOOBAR_H_ */
