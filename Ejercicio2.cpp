#include <iostream>
using namespace std;
int main() {
	
	int elementos[100],n,x,p;
	cout<<"Numero de elementos (n): ";
	cin>>n;
	cout<<"Suma requerida (x): ";
	cin>>x;
	
	for(int i = 0; i<n; i++){
		cout<<"Elementos del Arreglo: ";
		cin>>elementos[i];
	}
	
	for(int i = 0; i<n; i++){
		cout<<elementos[i];
	}
		
	return 0;
}
