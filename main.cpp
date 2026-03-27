#include"rectangle.h"
#include"trapezoid.h"
using namespace std;

int main(){
    int fig;
    cout << "Введите (1=прямоугольник, 2=трапеция): " << "\n";
    cin >> fig;
    switch(fig) {
        case 1: {
                int a, b, p, s;
                double d;
                cout <<"Введите длину прямоугольника: " << "\n";
                cin >> a;
                cout <<"Введите шикирну прямоугольника: " << "\n";
                cin >> b;
                if (proverka(a, b) == 0){
                        p = perimetr(a, b);
                        s = plochad(a, b);
                        d = diagonal(a, b);
                        cout <<"Периметр: " << p << "\n";
                        cout << "Площадь: " << s << "\n";
                        cout << "Диагональ: " << d << "\n"; 
                }
                break;
        }
        case 2: {
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
                }
                break;
        }
        
    }
    return 0;
}
