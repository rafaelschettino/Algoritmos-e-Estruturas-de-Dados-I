//Lista 22

#include <iostream>

using namespace std;

int TAM = 0;

class Triangulo{
    private:
        float lado1;
        float lado2;
        float lado3;
        static int quantidade;
        float calculaPerimetro()
        {
            float perimetro;
            perimetro = this->getLado1() + this->getLado2() + this->getLado3();
            return perimetro;
        }//fim Perimetro()
    public:
        Triangulo(float lado1, float lado2, float lado3)
        {
            this->setLado1(lado1);
            this->setLado2(lado2);
            this->setLado3(lado3);
            quantidade++;
        }//fim Triangulo()
        Triangulo(float lado)
        {
            this->setLado1(lado);
            this->setLado2(lado);
            this->setLado3(lado);
            quantidade++;
        }//fim Triagulo()
        Triangulo()
        {
            this->setLado1(0);
            this->setLado2(0);
            this->setLado3(0);
            quantidade++;
        }//fim Triangulo()
        static int Quant()
        {
            return quantidade;
        }//fim Quant()
        void setLado1(float lado1)
        {
            if(lado1 > 0) this->lado1 = lado1;
            else this->lado1 = 0;
        }//fim setLado1()
        void setLado2(float lado2)
        {
            if(lado2 > 0) this->lado2 = lado2;
            else this->lado2 = 0;
        }//fim setLado2()
        void setLado3(float lado3)
        {
            if(lado3 > 0) this->lado3 = lado3;
            else this->lado3 = 0;
        }//fim setLado3()
        float getLado1()
        {
            if(lado1 >= 0) return this->lado1;
            else return 0;
        }//fim getLado1()
        float getLado2()
        {
            if(lado2 >= 0) return this->lado2;
            else return 0;
        }//fim getLado2()
        float getLado3()
        {
            if(lado3 >= 0) return this->lado3;
            else return 0;
        }//fim getLado3()
        void leTriangulo()
        {
            this->leLado1();
            this->leLado2();    //Usuario ira digitar os 3 lados do triangulo
            this->leLado3();
        }//fim leTriangulo()
        void leLado1()
        {
            float lado1;
            cout << "\nLado 1: ";
            cin >> lado1;
            this->setLado1(lado1);
        }//fim leLado1()
        void leLado2()
        {
            float lado2;
            cout << "\nLado 2: ";
            cin >> lado2;
            this->setLado2(lado2);
        }//fim leLado3()
        void leLado3()
        {
            float lado3;
            cout << "\nLado 3: ";
            cin >> lado3;
            this->setLado3(lado3);
        }//fim leLado3()
        float Perimetro()
        {
            float perim = calculaPerimetro();
            return perim;
        }//fim Perimetro()
        int tipoTriangulo()
        {
            int tipo;
            if (this->getLado1() == this->getLado2() && this->getLado2() == this->getLado3()) {
                tipo = 1;
            }
            else if (this->getLado1() == this->getLado2() && this->getLado2() != this->getLado3()) {
                tipo = 2;
            }
            else if (this->getLado1() == this->getLado3() && this->getLado3() != this->getLado2()) {
                tipo = 2;
            }
            else if (this->getLado2() == this->getLado3() && this->getLado3() != this->getLado1()) {
                tipo = 2;
            }
            else if (this->getLado1() != this->getLado2() && this->getLado2() != this->getLado3() && this->getLado1() != this->getLado3()) {
                tipo = 3;
            }
            return tipo;
        }//fim tipoTriangulo()
};

int Triangulo::quantidade = 0;

void criaTriangulo(Triangulo *triangulos[]);
void listaTriangulos(Triangulo *triangulos[]);

int main()
{
    Triangulo *triangulos[100];
    int opcao;
    do{
        cout << "\n\t\t\tMENU\t\t\t\n";
        cout << "\n\tDigite [0] para encerrar o programa!";
        cout << "\n\tDigite [1] para criar um triangulo!";
        cout << "\n\tDigite [2] para listar triangulos!";
        cout << "\n\tDigite [3] para verificar a quantidade de triangulos criados!\n\t";
        cin >> opcao;
        switch(opcao){
        case 0:
            cout << "\nObrigado por utilizar o programa!";
            break;
        case 1:
            criaTriangulo(triangulos);
            break;
        case 2:
            listaTriangulos(triangulos);
            break;
        case 3:
            cout << "\nQuantidade de triangulos criados ate o momento: " << Triangulo::Quant();
        }//fim switch
    }while(opcao != 0);
    return 0;
}//fim main()

void criaTriangulo(Triangulo *triangulos[])
{
    triangulos[Triangulo::Quant()] = new Triangulo;
    triangulos[TAM]->leTriangulo();
    TAM++;
}//fim criaTriangulo()

void listaTriangulos(Triangulo *triangulos[])
{
    for(int i = 0; i < TAM; i++){
        cout << "\nLados Triangulo " << (i + 1) << " = " << triangulos[i]->getLado1();
        cout << "\n\t\t\t" << triangulos[i]->getLado2();
        cout << "\n\t\t\t" << triangulos[i]->getLado3();
        cout << "\nPerimetro do Triangulo " << (i + 1) << " = " << triangulos[i]->Perimetro();
    }//fim for
}//fim listaTriangulos()
