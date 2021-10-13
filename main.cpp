#include <iostream>
using namespace std;
int main() {
int num_1=0;
int num_2=0;
int num_3;
int num_4;
int result_1=0;
int result_2=0;

cout<<"dijite un numero:";
cin>> num_1;//se define el valor de una variable
cout<<"escribir numero";
cin>> num_2;//se define el valor de una variable
result_1=num_1+num_2;
cout<<result_1<<"\n";//se enseña el resultado

cout<<"dijite un numero:";
cin>> num_3;//se define el valor de una variable
cout<<"dijite un numero:";
cin>> num_4;//se define el valor de una variable
cout<<"resultado de la resta";
result_2=num_3-num_4;
cout<<result_2<<"\n";//se enseña el resutado
cout<<"resultado de multiplicacion de varios resultados";cout<<result_1*result_2;//se hace la multiplicacion y se enseña

}