#include <iostream>
using namespace std;

int main() {
    float soma[3][3] = {};
    float nota[2][3] = {{9, 8, 7}, {6, 5, 4}};

    cout << "Matriz soma:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            cout << soma[i][j] << "\t";
        cout << endl;
    }
    cout << endl;

    cout << "Matriz nota:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++)
            cout << nota[i][j] << "\t";
        cout << endl;
    }
    cout << endl;

    system("Pause");
    return 0;
}

