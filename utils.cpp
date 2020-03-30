#include <iostream>
#include <vector>
#include <math.h>
#include <stdlib.h>

using namespace std;

double calc_error(vector<double> x, vector<double> y, double eps, double q){
    sqrt((y[0] - x[0])*(y[0] - x[0]) + (y[1] - x[1])*(y[1] - x[1]) + (y[2] - x[2])*(y[2] - x[2]) ) <= eps*(1-q)/q;
}

vector<double> F(vector<double> x){
    x[0] = ( sqrt(3) - ( x[1]* ( cos(x[2])* cos(x[2]) ) )  / 
                        ( x[1]*x[1] + 1) ) / 2;
    x[1] = ( 14 - exp( (-1)*abs(x[1]) ) - exp( (-1)*(pow(x[2], 2) ) ) ) / 5;
    x[2] = ( sqrt(5) - atan(x[0] - x[1]) ) / 3;
}
