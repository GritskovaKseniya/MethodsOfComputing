#include <iostream>
#include <vector>
using namespace std;

#include "utils.cpp"

int main(){
    double q, eps, err;
    cout << "Input q: " << endl;
    cin >> q; //q = 1 
    cout << "Input epsilon: " << endl; // должна не сильно отличаться от 0
    cin >> eps;
    vector<double> x_cur(3,0);
    vector<double> x_prev;
    vector<double> pr(3,0);
    do
    {
        x_prev = x_cur;
        x_cur = F(x_cur);
        // вычисляем погрешность
        err = calc_error(x_prev, x_cur, eps, q); // погрешность

    } while (eps<= err);

    // выводим на экран
    cout << "X=";
    for (int i = 0; i < x_cur.size(); i++) {
        cout << x_cur[i] << " ";
    }
    cout << endl;
    cout << "Error:" << err << endl;
    pr = F(x_cur);
    cout << "Vector proverki: ";
    for (int i = 0; i < pr.size(); i++) {
        cout << pr[i] << " ";
    }
    cout << endl;
}
