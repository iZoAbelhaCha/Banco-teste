#pragma once
#include <iostream>
#include <string>
#include "Clientes.h"

int Clientes();

void Menu();
int Nav();
int SwitchMenu(int Op);
void MenuAD();
int SwitchMenuAD(int Op);


using namespace std;
struct Conta {

	string Banco;
	int Agencia;
	int NConta;
	string CPF;
	double Saldo;
	

	Conta();
	Conta(string Banco, int Agencia, int NConta, string CPF, double Saldo);


	void setBanco(string Banco);
	void setAgencia(int Agencia);
	void setConta(int NConta);
	void setCPF(string CPF);
	void setSaldo(double Saldo);

};
Conta::Conta()
{
	Banco = "";
	Agencia = { 0 };
	NConta = { 0 };
	CPF = "";
	Saldo = { 0 };
}

Conta::Conta(string Banco, int Agencia, int NConta, string CPF, double Saldo)
{
	this->Banco = Banco;
	this->Agencia = Agencia;
	this->NConta = NConta;
	this->CPF = CPF;
	this->Saldo = Saldo;
}

void Conta::setBanco(string Banco)
{
	string Descarte;
	cin >> Descarte;
	this->Banco = Descarte;
}

void Conta::setAgencia(int Agencia)
{
	this->Agencia = Agencia;
}

void Conta::setConta(int NConta)
{
	this->NConta = NConta;
}

void Conta::setCPF(string Pessoa)
{
	this->CPF = CPF;
}

void Conta::setSaldo(double Saldo)
{
	this->Saldo = Saldo;
}

inline int Nav()
{
	int Op;
	cin >> Op;
	return Op;
}

void Menu()
{
	do
	{
		cout << "-----Menu-----\n";
		cout << "1 - \n";
		cout << "2 - Alterar Dados.\n";
		cout << "3 - \n";
		cout << "4 - \n";
		cout << "5 - \n";
	} while (SwitchMenu(Nav()) != 5);
}
void MenuAD()
{
	do
	{
		cout << "-----Menu-----\n";
		cout << "1 - Banco\n";
		cout << "2 - Agencia\n";
		cout << "3 - Numero da conta\n";
		cout << "4 - CPF\n";
		cout << "5 - Saldo\n";
	} while (SwitchMenuAD(Nav()) != 5);
}

inline int SwitchMenu(int Op)
{
	switch (Op)
	{
	case 1:
		break;
	case 2:
		break;
	case 3:
		break;
	case 4:
		break;
	case 5:
		break;
	case 6:
		break;
	default:
		break;
	}
	return Op;
}

inline int SwitchMenuAD(int Op)
{
	switch (Op)
	{
	case 1: Cliente2->setBanco();
		break; 
	case 2:
		break;
	case 3:
		break;
	case 4:
		break;
	case 5:
		break;
	case 6:
		break;
	default:
		break;
	}
	return Op;
}

int Clientes()
{
	Conta Cliente1("Brasil", 1231, 3333, "Bebe", 0.1);
	Conta Cliente2;
	Conta Cliente3;

	return 0;
}