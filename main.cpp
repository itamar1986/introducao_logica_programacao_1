#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	//criando variaveis para os dados de entrada
	int cod_filial;
	float mes_1 = 0;
	float mes_2 = 0;
	float mes_3 = 0;
	float total_filial = 0;
	float total_empresa = 0;

	//obtendo dados de entrada
	cout << "     Seu Restaurante Vegetariano" << endl;
	cout << endl;
	cout << "Por favor, informe o codigo da filial. (Digite 0 para sair) ";
	cin >> cod_filial;
	cin.clear();
	cout << endl;
	
	while (cod_filial != 0) {
	
		cout << "Por favor, informe o valor de vendas do mes 1: ";
		cin >> mes_1;
		cin.clear();
		cout << endl;
	
		cout << "Por favor, informe o valor de vendas do mes 2: ";
		cin >> mes_2;
		cin.clear();
		cout << endl;
	
		cout << "Por favor, informe o valor de vendas do mes 3: ";
		cin >> mes_3;
		cin.clear();
		cout << endl;

		//calculando o valor "total_filial"
		total_filial = mes_1 + mes_2 + mes_3;
		cout << "Valor total da filial: " << total_filial << endl;
		cout << endl;
		cout << "==============================" << endl;
		cout << endl;

		//calculando o valor "total_empresa"
		total_empresa = total_empresa + total_filial;
		cout << "Total do Restaurante: " << total_empresa << endl;
		cout << endl;
		
		//obtendo dados de entrada
		cout << "Por favor, informe o codigo da filial. (Digite 0 para sair) ";
		cin >> cod_filial;
		cin.clear();
		cout << endl;
	}

	system("PAUSE");
	return 0;
}
