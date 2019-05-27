#include <iostream>
#include <cstdlib>
#include "PilhaCont.h"

using namespace std;

PilhaCont::PilhaCont(int tam)
{
	max = tam;
	topo = -1;
	vet = new int[max];
}

PilhaCont::~PilhaCont()
{
	delete [] vet;
}

int PilhaCont::getTopo()
{
	if(topo != -1) {
		return vet[topo];
	} else {
		cout << "ERRO: Pilha vazia!" << endl;
		exit(1);
	}
}

bool PilhaCont::vazia()
{
	return topo == -1;
}

void PilhaCont::empilha(int val)
{
	if(topo == (max - 1)){
		cout << "ERRO: Vetor Cheio!" << endl;
	}
	topo = topo + 1;
	vet[topo] = val;
}

int PilhaCont::desempilha()
{
	if(topo == -1){
		cout << "ERRO: Pilha vazia!" << endl;
		exit(1);
	}
	topo = topo - 1;
	return vet[topo + 1];
}

int PilhaCont::getQuantidadeElementos() {
	return topo + 1;
}

void PilhaCont::imprime() {
	for(int i=0; i<= topo; i++) {
		cout << vet[ i ] << "\t";
	}
	cout << endl;
}
