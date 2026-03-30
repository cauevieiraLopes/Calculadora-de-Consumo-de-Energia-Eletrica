#include <iostream>
 
 using namespace std;
 int main()
 {
	int kWh;
	float Valor_Final=0, Consumo_kWh_100;
	
	do
	{
		cout<<"Qual o consumo mensal kWh: ";
		cin>>kWh;
	}while(kWh <= 0);
	
	Consumo_kWh_100 = kWh;
	
	if(kWh <= 100)
	{
		Valor_Final = Consumo_kWh_100 * 0.40;
		cout<<"O valor a pagar pelo consumo na faixa de "<<kWh<<"kWh é de:"<<endl;
		cout<<"R$"<<Valor_Final;
	}
	else if(kWh >= 101 && kWh < 300)
	{
		Consumo_kWh_100 -= 100; //retirar os 100 primeiros kWh
		Valor_Final = Valor_Final + (100 * 0.40); //Pegar o valor desses 100 primeiros kWh
		Consumo_kWh_100 = Consumo_kWh_100 * 0.65; //Calcular o valor do restante
		Valor_Final += Consumo_kWh_100; //Somar os valores
		cout<<"O valor a pagar pelo consumo na faixa de "<<kWh<<"kWh é de:"<<endl;
		cout<<"R$"<<Valor_Final;
	}
	else if(kWh >= 300)
	{
		Consumo_kWh_100 -= 100; //retirar os 100 primeiros kWh
		Valor_Final = Valor_Final + (100 * 0.40); //Pegar o valor desses 100 primeiros kWh
		Consumo_kWh_100 -= 199; //retirar os valores entre 101 e 299 para obter os valores desta faixa
		Valor_Final = Valor_Final + (199 * 0.65); // somar os valores ao montante
		Consumo_kWh_100 = Consumo_kWh_100 * 0.90; // calcular o restante
		Valor_Final += Consumo_kWh_100; //somar o restante
		cout<<"O valor a pagar pelo consumo na faixa de "<<kWh<<"kWh é de:"<<endl;
		cout<<"R$"<<Valor_Final;
	}
	return 0;
 }
