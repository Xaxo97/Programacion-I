#include <iostream>

using namespace std;

int suma(int a){
    int sum;

    sum = 0;

    for(int i{1}; i <= a; i++){
        if(a % i == 0){
            sum = sum + i;
        }
    }
    return sum;
}
int main()
{
    int x;

    cout << "Introduce un numero: " << endl;
    cin >> x;

    cout << "El resultado de la suma es: " << suma(x) << endl;

    return 0;
}
