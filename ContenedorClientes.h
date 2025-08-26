#pragma once
#include <iostream>
#include <string>
#include "Cliente.h"

using namespace std;
class ContenedorClientes{
private: 
	int tam; 
	int cantidad; 
private: 
	string toString(); 

public:
	ContenedorClientes(int tam); 
	bool agregarCliente(Cliente c); 
	bool eliminarCliente(string dni); 
	Cliente* buscarCliente(string dni); 
	int getCantidad(); 
	int getTam(); 
	~ContenedorClientes();
	

};

