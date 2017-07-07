#ifndef INTERFACEUSUARIO_H
#define INTERFACEUSUARIO_H

#include "Interfaces.hpp"
#include "Usuario.hpp"
#include "InterfaceAdmin.hpp"
#include "InterfaceEstudo.hpp"
#include <stdio.h>
#include <stdlib.h>
#include <sstream>
#include <stdexcept>
using namespace std;

/*interfaces que ir�o interagir com o usuario*/
class InterfaceUsuario:public InterfacePrograma
{
private:
	/*constantes*/
	static const int LOGAR;
	static const int CADASTRAR;
	static const int SAIR;

	Usuario user;

	bool Login(string, string);
	void Cadastrar(string, string, string, int);
	void Sair();
public:
	void mostrarOpcoes()throw(runtime_error);
	//void mostrarOpcoes(Usuario)throw(runtime_error);
	void executarOpcao(int)throw(runtime_error);
};

#endif //INTERFACEUSUARIO_H