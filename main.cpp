#include <iostream>
#include <vector>
using namespace std;

#include "utils.cpp"

int main(){
    double q, eps, err;
    cout << "Input q: " << endl;
    cin >> q; //q = 1 from calculations
    cout << "Input epsilon: " << endl; // shouldn't differ much from 0
    cin >> eps;
    vector<double> x_cur(3,0);
    vector<double> x_prev;
    vector<double> pr(3,0);
    do
    {
        x_prev = x_cur;
        x_cur = F(x_cur);
        //calculate error
        err = calc_error(x_prev, x_cur, q);
        cout << "X=";
        print(x_cur);
        cout << "ERROR: " << err << endl;

    } while (eps<= err);

    
    pr = F(x_cur);
    cout << "Check vector: ";
    print(pr);
    cout << endl;
}

