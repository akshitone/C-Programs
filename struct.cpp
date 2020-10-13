#include<iostream>
#include<complex>
using namespace std;
struct student
{
     std::complex<double> mycomplex(10.0, 2.0);
};

int main()
{
    student s;
    cout << "Real part: " << s.real(mycomplex) << endl;
    cout << "Imaginary part: " << s.imag(mycomplex) << endl;
    return 0;
}
