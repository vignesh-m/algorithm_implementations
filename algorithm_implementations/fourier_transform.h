//
//  fourier_transform.h
//  algorithm_implementations
//
//  Created by Vignesh M on 02/12/14.
//  Copyright (c) 2014 vignesh. All rights reserved.
//

#ifndef __algorithm_implementations__fourier_transform__
#define __algorithm_implementations__fourier_transform__

#include <iostream>
#include <complex>
#include <vector>
#define PI acos(-1.0)
using namespace std;
typedef complex<double> base;
void fft (vector<base> & , bool );
void poly_multiply (const vector<int> & , const vector<int> & , vector<int> & );
#endif /* defined(__algorithm_implementations__fourier_transform__) */
