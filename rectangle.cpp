#include"rectangle.h"
using namespace std;

int perimetr(int a, int b){
    return (a  * 2 + b * 2);
}

int plochad(int a, int b){
    return (a * b);
}

double diagonal(int a, int b){
    return(sqrt(a*a + b*b));
}

int proverka(int a, int b){     
    if (a<=0 || b<=0 || b>a){
        cout << "Длина должна быть больше ширины! Числа должны быть положительными!";
        return 1;
    }
    return 0;
}