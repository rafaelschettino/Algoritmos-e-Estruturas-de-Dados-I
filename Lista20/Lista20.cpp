//Lista 20

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

const int MAX = 100;
int TAM = 0;

class Agenda{
private:
    string nome;
    int dia;
    int mes;
public:
    void setNome(string nome){
        this -> nome = nome;
    }//fim setNome()
    string getNome(){
        return this -> nome;
    }//fim getNome()
    void setDia(int dia){
        if(dia > 0 && dia <= 31){
            this -> dia = dia;
        }else this -> dia = 0;
    }//fim setDia()
    int getDia(){
        return this -> dia;
    }//fim getDia()
    void setMes(int mes){
        if(mes > 0 && mes <= 12){
            this -> mes = mes;
        }else this -> mes = 0;
    }//fim setMes()
    int getMes(){
        return this -> mes;
    }//fim getMes()
    void leAgenda(){
        string nome;
        cout << "\nNome: ";
        cin >> nome;
        int dia;
        cout << "\nDia: ";
        cin >> dia;
        int mes;
        cout << "\nMes: ";
        cin >> mes;
        this -> setNome(nome);
        this -> setDia(dia);
        this -> setMes(mes);
    }//fim leAgenda()
    void escreveAgenda(){
        cout << "\nNome: " << this -> getNome();
        cout << "\nDia: " << this -> getDia();
        cout << "\nMes: " << this -> getMes();
    }//fim escreveAgenda()
};

int Menu(Agenda agenda[]);
void cadastraPessoa(Agenda agenda[]);
void aniversariantesDoMes(Agenda agenda[]);
void listaAniversariantes(Agenda agenda[], int mes);

int main()
{
    Agenda agenda[MAX];
    int escolhausuario;
    do{
        escolhausuario = Menu(agenda);
    }while(escolhausuario > 0 && escolhausuario <= 2);
    return 0;
}//fim main()

int Menu(Agenda agenda[])
{
    int opcao;
    cout << "\n\tMENU PRINCIPAL\t\n";
    do{
        cout << "\n\tDigite [0] para encerrar o programa!";
        cout << "\n\tDigite [1] para cadastrar uma pessoa!";
        cout << "\n\tDigite [2] para pesquisar por aniversariantes do mes!\n\t";
        scanf("\n%d", &opcao);
        if(opcao < 0 || opcao > 2) cout << "\nOpcao invalida!Tente novamente\n";
    }while(opcao < 0 || opcao > 2);
    switch(opcao){
    case 1:
        cadastraPessoa(agenda);
        break;
    case 2:
        aniversariantesDoMes(agenda);
        break;
    case 0:
        cout << "\nObrigado por utilizar o programa!";
        exit(0);
    }//fim switch
    return opcao;
}//fim Menu()

void cadastraPessoa(Agenda agenda[])
{
    if(TAM < MAX){
        agenda[TAM].leAgenda();
        TAM++;
    }//fim if
    else cout << "\nVoce atingiu o numero maximo de cadastros!\n";
}//fim cadastraPessoa();

void aniversariantesDoMes(Agenda agenda[])
{
    int mes;
    do{
        cout << "\nMES? ";
        scanf("%d", &mes);
        if(mes < 1 || mes > 12) cout << "\nValor fora do dominio! Tente novaemente\n";
    }while(mes < 1 || mes > 12);
    listaAniversariantes(agenda, mes);
}//fim aniversariantesdoMes()

void listaAniversariantes(Agenda agenda[], int mes)
{
    cout << "\nOs aniversariantes sao:\n";
    for(int i = 0; i < TAM; i++){
        if(agenda[i].getMes() == mes){
            cout << "\n" << agenda[i].getNome() << " nasceu no dia " << agenda[i].getDia() << " deste mes\n";
        }//fim if
    }//fim for i
}//fim listaAniversaritantes()
