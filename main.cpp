#include <iostream>
using namespace std;

int main(){
        double a,b,c,d;
        cout << "Введите длину большего основания трапеции:" << "\n";
        cin >> a;

        cout << "Введите длину первой боковой стороны трапеции:" << "\n";
        cin >> b;

        cout << "Введите длину меньшего основания трапеции:" << "\n";
        cin >> c;

        cout << "Введите длину второй боковой стороны трапеции:" << "\n";
        cin >> d;

        if (TrapezoidCheck(a,b,c,d)==0){
        double Perimeter = TrapezoidPerimeter(a,b,c,d);
        cout << "Периметр заданной трапеци: "  << Perimeter << "\n";

        double Square = TrapezoidSquare(a,b,c,d);
        cout <<"Площадь заданной трапеции: "<< Square << "\n";

        double MidLine = TrapezoidMidLine(a,c);
        cout <<"Длина средней линии заданной трапеции: "<< MidLine;
        return 0;  
        }
}

