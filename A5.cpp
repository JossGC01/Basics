#include <iostream>
using namespace std;
int main()
{ 
auto b = 10;
auto d = 3.5f;
decltype(b)x;
const double pi = 3.1416;
int a (10);//Manera alternativa de inicializar variables de tipo int
char c ('S');//Declaracion de variables tipo char
const char tabulador = '\t';
string S;
x=5;
cout<<a<<"\n";
cout<<c<<"\n";
cout<<pi<<"\n";
cout<<tabulador;
cout<<"Random word"<<"\n";
cout<<b<<"\n";
cout<<d<<"\n";
cout<<x<<'\n';
getline(cin, S); // Leer con salto de linea
cout<<S<<'\n';
	
	} 
