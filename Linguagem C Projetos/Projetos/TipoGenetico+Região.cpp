#include <iostream>
using namespace std;

int main() {
    int gene;
    cout << "Digite o tipo genético: ";
    cin >> gene;
    
    switch (gene) {
        case 1: cout << "Região Sul\n";
                break;
        case 2: cout << "Região Norte\n";
                break;
        case 3: cout << "Região Leste\n";
                break;
        case 4:
        case 5:
        case 6:
        case 7: cout << "Região Oeste\n";
                break;
        default: cout << "Exotico\n";
    }
    
    system("pause");
    return 0;
}