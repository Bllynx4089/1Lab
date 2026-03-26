#ifndef TRAPEZOID
#define TRAPEZOID

#include <iostream>
#include <cmath>
using namespace std;

double TrapezoidPerimeter(double a, double b, double c, double d){ //Функция нахождения периметра трапеции
    return (a+b+c+d);}

double TrapezoidSquare(double a, double b, double c, double d){ //Функция нахождения площади по формуле Герона для трапеции
    return ((a+c)/2)*(sqrt(b*b-(((a-c)*(a-c)+b*b-d*d)/(2*(a-c)))*(((a-c)*(a-c)+b*b-d*d)/(2*(a-c)))));}

double TrapezoidMidLine(double a, double c){ //Функция нахождения средней линией трапеции
    return (a+c)/2;}

int TrapezoidCheck(double a, double b, double c, double d){ //Функция проверка параметров заданной трапеции
    if (a<=0 || b<=0 || c<=0  || d<=0){
        cout << "Стороны трапеции не могут быть меньше или равны нулю" << "\n";
        return 1;
    }
    if (a<=c){
        cout << "Большее основание не может быть равно или меньше, чем меньшее основание" << "\n";
        return 1;
    }
return 0;
}

#endif