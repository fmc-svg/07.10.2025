#include <iostream>

int main() {
    int N;
    std::cin >> N;

    double *p = nullptr;         
    p = new double;              
    *p = N;                      

    double **pp = nullptr;       
    pp = &p;                     

    std::cout << **pp << std::endl; 

    delete p;   

    return 0;
}