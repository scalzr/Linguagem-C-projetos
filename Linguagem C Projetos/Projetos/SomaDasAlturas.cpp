#include <iostream>
using namespace std;
int alturas [5] = {185, 201, 188, 195, 176};
int i, soma=0;
int main()
{
    for (i=0; i <= 5; i++)
        soma += alturas[i];
    cout << "Soma das alturas =" << soma;
    cout << "\n\n";
    system("Pause");
    return 0;
}
