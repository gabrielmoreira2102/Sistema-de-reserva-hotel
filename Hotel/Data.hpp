#ifndef Data_H
#define Data_H

#include <vector>
#include <iostream>
using namespace std;

class Data
{
public:
    Data(int d, int m, int a, int t); 

    void toString(int i);
    void setDia(int d);
    void setMes(int m);
    void setAno(int a);
    void setTempo(int t);
    
		int getDia(){return dia;};
    int getMes(){return mes;};
    int getAno(){return ano;};
		int getTempo(){return tempo;};


private:
    vector <int> D;
    vector <int> M;
    vector <int> A;
    vector <int> T;
   
	  int dia;
    int mes;
    int ano;
		int tempo;
};
# endif
