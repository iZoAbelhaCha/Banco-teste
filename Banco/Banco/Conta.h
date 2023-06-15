#pragma once
#include <iostream>
#include <string>

using namespace std;
struct Conta {

	string Banco;
	int Agencia;
	int NConta;
	string Pessoa;
	double Saldo;
	

	Conta();
	Conta(string Banco, int Agencia, int NConta, string Pessoa, double Saldo);
	~Conta();


	void setBanco(string Banco);
	void setAgencia(int Agencia);
	void setConta(int NConta);
	void setPessoa(string Pessoa);
    void setCPF(int CPF);
	void setSaldo(double Saldo);

};