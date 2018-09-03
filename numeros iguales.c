#include <stdio.h>

int main(int argc, char *argv[]) {
	int buscarelento(int elemento){
		nodo*aux=inicio;
		while ((aux!= NULL )&&(aux ->dato!=elemento)){
			aux=aux->siguiente;
		}
		if(aux==null){
			return false;
		}
		return true;
	}
	return 0;
}

