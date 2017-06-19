/*
 * Header.h
 *
 *  Created on: Apr 11, 2017
 *      Author: asdf
 */

#ifndef HEADER_H_
#define HEADER_H_
#include <iostream>
#include <cmath>

template <class T>
T distance(T x1, T y1, T x2, T y2){
	return sqrt ((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

}

namespace test
{
	template <typename T> inline
	T test1(T x)
	{
		return x*2;
	}
}

#endif /* HEADER_H_ */
