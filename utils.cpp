#include <iostream>
#include <vector>
#include <math.h>
#include <stdlib.h>

using namespace std;

double calc_error(vector<double> x, vector<double> y, double q){
    double err; // variable error
    double t = 0;
    for(int i = 0; i < x.size(); i++){
        double d = abs(x[i] - y[i]);
        t += d*d;
    }
    err = q/(1-q) * sqrt(t);
    return err;
}

vector<double> F(vector<double> x){
    vector<double> result(3,0);
//    result.push_back( ( sqrt(5) - atan(x[0] - x[1]) ) / 3 );
    //vector values from calculations
    result[0] = ( sqrt(3) - ( x[1]* ( cos(x[2])* cos(x[2]) ) )  / 
                        ( x[1]*x[1] + 1) ) / 2;
    result[1] = ( 14 - exp( (-1)*abs(x[1]) ) - exp( (-1)*(pow(x[2], 2) ) ) ) / 5;
    result[2] = ( sqrt(5) - atan(x[0] - x[1]) ) / 3;
    return result;
}

void print(vector<double> x){
    //print on screen
    for (int i = 0; i < x.size(); i++) {
        cout << x[i] << " ";
    }
    cout << endl;
}