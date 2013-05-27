/**
 * File: regression.h
 * Author: Yunqi Zhang
 * Email: yqzhang@ucsd.edu
 * import the regression from regression.c
 */

#ifndef _REGRESSION_H_
#define _REGRESSION_H_

#define CPU_NUM 8

inline double regression_smt ( double x1, double x2, double x3, double x4, double x5, double x6, double x7, double x8,
        double x9, double x10, double x11, double x12, double x13, double x14, double x15, double x16);

inline double regression_cmp ( double x1, double x2, double x3, double x4, double x5, double x6, double x7, double x8,
        double x9, double x10, double x11, double x12, double x13, double x14, double x15, double x16);

#endif
