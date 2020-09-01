//PUNTEROS

#include<iostream>
using namespace std;

class MiClase
{
private:
    int x;
public:
    MiClase(int);
    int getX();
};

MiClase::MiClase(int x) {
    this->x = x;
}
int MiClase::getX() {
    return x;
}


int main()
{
    int var = 250;  //Creo variable tipo int
    int* ptr_var = &var;  //Creo un puntero que apunte a la variable var
    int** ptr2_var = &ptr_var;  //Creo un puntero que apunte a la variable var

    cout << "Valor de la variable var: " << var << endl;
    cout << "Direccion de la variable var: " << &var << endl;
    cout << "-------------------------------------------------------" << endl;
    cout << "Direccion almacenada en el puntero ptr_var: " << ptr_var << endl;
    cout << "Direccion del puntero ptr_var: " << &ptr_var << endl;
    cout << "Valor al que apunta el puntero ptr_var: " << *ptr_var << endl;
    cout << "-------------------------------------------------------" << endl;
    cout << "Direccion almacenada en el puntero ptr2_var: " << ptr2_var << endl;
    cout << "Direccion del puntero ptr2_var: " << &ptr2_var << endl;
    cout << "Valor al que apunta el puntero ptr2_var: " << *ptr2_var << endl;
    cout << "Valor al que apunta el puntero al que apunta ptr2_var: " << **ptr2_var << endl;

    MiClase obj(var);  //Un objeto cualquiera
    MiClase* ptr_obj = &obj;  //Apuntando un puntero al objeto obj

    cout << "-------------------------------------------------------" << endl;
    cout << "Direccion del objeto obj: " << &obj << endl;
    cout << "Direccion almacenada en el puntero ptr_obj: " << ptr_obj << endl;
    cout << "Direccion del puntero ptr_obj: " << &ptr_obj << endl;
    cout << "Valor de la variable var: " << ptr_obj->getX() << endl;
    cout << "Valor de la variable var: " << obj.getX() << endl;

    return 0;
}