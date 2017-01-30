#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    
    int lower_limit = -40;
    int higher_limit = 100;
    int step = 3;
    
    cout << "Please give in a lower limit: " << endl;
//    cin >> lower_limit;
    cout << "Please give in a higher limit: " << endl;
//    cin >> higher_limit;
    cout << "Please give in a step: " << endl << endl;
//    cin >> step;
    
    double c_degree = lower_limit ;
    double f_degree = 0 ;
    
    //C to F
    cout << "Celsius" << setw(20) << "Fahrenheit" << endl;
    cout << "-------" << setw(20) << "----------" << endl;
    for (int i = lower_limit; i <= higher_limit; i += step ) {

        cout << fixed << setprecision(2)<< setw(8) << c_degree;
        //F= 9/5 C＋ 32
        f_degree = (9.00 * c_degree) / 5.00 + 32 ;
        cout << setw(20) << f_degree <<endl;
        c_degree += step;
    }
