#ifndef Quartos_hpp
#define Quartos_hpp

class  Quartos
{
public:
    Quartos();
    void setSimples(int s);
    void setLuxo(int l);
    void setnumCama(int cama);
		void settipoCama(int tipo);
    
    int getSimples();
    int getLuxo();
    int getnumCama();
		int gettipoCama();
    
private:
    int simples;
    int luxo;
    int numCama;
		int tipoCama;
};

# endif