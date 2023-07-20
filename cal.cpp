#include <iostream>

int calculator(double x,double y,double z) {
    double s;
    if (z == 1) {
        s = x + y;
        std::cout << x << "+" << y << "=" << s << "\n";
    }
    else if (z == 2) {
        s = x - y;
        std::cout << x << "-" << y << "=" << s << "\n";
    }
    else if (z == 3) {
        s = x * y;
        std::cout << x << "x" << y << "=" << s << "\n";
    }
    else {
        s = x / y;
        std::cout << x << "/" << y << "=" << s << "\n";
    }
    return 0;
}

int main() {
    double x,y,z;
    int c;
    while(true) {
        std::cout << "Escreva o 1o numero: ";
        std::cin >> x;
        std::cout << "Escreva o 2o numero: ";
        std::cin >> y;
        std::cout << "Escolha: \n [1]+ \n [2]- \n [3]x \n [4]/ \n R: ";
        std::cin >> z;

        calculator(x,y,z);

        std::cout << "Fazer mais contas[1] \n Troca o simbolo[2] \n Encerrar[3] \n R: ";
        std::cin >> c;

        if (c == 1) {
            std::cout << "--------------\n";
        }
        else if (c == 2) {
            std::cout << "Escolha: \n [1]+ \n [2]- \n [3]x \n [4]/ \n R: ";
            std::cin >> z;
            calculator(x,y,z);
        }
        else {
            break;
        }
    }
    return 0;
}