#include <iostream>

using namespace std;

// Fun��o que retorna k mod m
int gen_hash(int k, int m)
{
	int aux;
	aux = k % m;
	if(aux < 0)
		aux += m;
	return(aux);
}


int main()
{
	int k;
	int m;

	// Leitura de dados e acionamento da fun��o
	cin >> k >> m;
	while(k != 0 && m != 0){
		cout << gen_hash(k, m) << endl;
		cin >> k >> m;
	}
	
	
	return 0;
}