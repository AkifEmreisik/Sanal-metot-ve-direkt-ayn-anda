#include<iostream>

class Meyve{
	public:
		int sap;
		bool cekirdeg;
	virtual void su() = 0;
};

class Elma : public Meyve{
	public:
		int Renk;
	void su(){
		std::cout<<"Bu Bir";
		
	}
};

class Portakal :public Meyve{
	public:
		bool Kabuk;
	void su(){
		std::cout<<"  Denemedir"<<std::endl;
	}
};

Sula(Meyve* meyveptr){
	meyveptr->su();
}

int main(){
	class Elma elma;
	class Portakal port;
	elma.su();
	port.su();
	Sula(&elma);
	Sula(&port);
	return 0;
	
}
