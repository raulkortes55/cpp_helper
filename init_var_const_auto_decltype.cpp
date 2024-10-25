#include <iostream>
using std::cout;
using std::endl;


int main() {
    int val = 0; //init 
    int pow[] = {1,2,4,8}; //init 

    //cout<<"Helowold x"<<endl;
    //double d; // var declaration of type double

    
    //d = 5.78; //assignment
    double d(-4.37); //functional notation
    short sh(10); //functional notation

    char ch{'b'}; //braced initialization
    long lv{}; // init by ZERO [if "long lv;"" wo init there will be trash contents]

    //{}  checking type of init data
    //long lv{5.53} == ERROR   but long lv(5.42) == NO ERROR plus CAST and type cast TO INT
    //CAST - приведение допустим одного типа к другому ин инглиш

    int sum {2+23+4};
    double p (1 * 3.4 - 1);
    bool n_f1(false), t_f1(true);

    cout << sh << " " << d << endl;
    cout << ch << " " << lv << endl;

    return 0;
}
