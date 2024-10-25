#include <iostream>
#include <list> // двусвязные списки  two linked list
using std::cout;
using std::endl;


//void func(auto x) {}  ERROR with AUTO  лучше вместо использовать перегрузку или определять шаблон FUNC



int main() {
    std::list<short> dg = {-3,-2,0,2,3};

    for (std::list<short>::iterator i = dg.begin(); i!= dg.end(); ++i)
        cout << *i << " ";

    //BUT WE CAN DO SO auto instead of std::list<short>::iterator
    for (auto i = dg.begin(); i!= dg.end(); ++i)
        cout << *i << " ";

    


    /*
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

    //CONST must be initialized!
    const double pi {3.1415};

    //auto instead of auto comiler insert calculatedd type of RHS
    auto ka = -100; //auto int
    auto da = 76.98; //auto double
    auto ga = 0.55f; //auto float
    auto ha = 'f'; //auto char

    auto hh = (short)10 + 1000000L; //auto unsigned long
    auto ii = 1 +2 -10 ; //auto int
    auto dda = 1 + ii +3.0; // auto double
    auto gg = 55u;//auto unsigned int

    */

    /*
    int *ptr = nullptr;
    int k;
    int& lk = k;

    auto t1 = k; //int
    auto t2 = *ptr; //int
    auto t3 = ptr; //int *
    auto t4 = &ptr; //int **
    auto t5 = lk; //int
    */

   /*
    const int *ptr = nullptr;
    const int k = 0;
    const int& lk = k;

    auto t1 = k; //int
    auto t2 = *ptr; //int
    auto t3 = ptr; // const int *
    auto t4 = &ptr; //const int **
    auto t5 = lk; //int


    decltype(k) var1 = 1; //return type  wo changes
    decltype(ptr) var2; //const int *
    decltype(lk) var3 = k; // const int &

    



    cout << sh << " " << d << endl;
    cout << ch << " " << lv << endl;

    */

    return 0;
}
