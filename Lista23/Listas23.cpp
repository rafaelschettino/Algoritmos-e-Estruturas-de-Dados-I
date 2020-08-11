//Listas 23 e 24

#include <iostream>

using namespace std;

int TAMQuadrado = 0;
int TAMCirculo = 0;
int TAMTriangulo = 0;

class FigGeometrica{
    private:
        static int quantidade;
    public:
        FigGeometrica()
        {
            quantidade++;
        }//fim FigGeometria()
        virtual float perimetro() = 0;
        virtual float Area() = 0;
        static int Quantidade()
        {
            return quantidade;
        }//fim Quantidade()
};
int FigGeometrica::quantidade = 0;

class Quadrado:FigGeometrica{
    private:
        static int quantidade;
        float lado;
    public:
        Quadrado():FigGeometrica()
        {
            this->setLado(0);
            quantidade++;
        }//fim Quadrado()
        Quadrado(float lado):FigGeometrica()
        {
            this->setLado(lado);
            quantidade++;
        }//fim Quadrado()
        void setLado(float lado)
        {
            this->lado = lado;
        }//fim setLado()
        float getLado()
        {
            return this->lado;
        }//fim getLado()
        void leQuadrado()
        {
            float lado;
            cout << "\nDetermine o lado deste quadrado: " << endl;
            cin >> lado;
            this->setLado(lado);
        }//fim leQuadrado()
        float perimetro()
        {
            float perim;
            perim = 4 * this->lado;
            return perim;
        }//fim perimetro()
        float Area()
        {
            float area;
            area = this->lado * this->lado;
            return area;
        }//fim Area()
        static int Quantidade()
        {
            return quantidade;
        }//fim Quantidade()

};
int Quadrado::quantidade = 0;

class Circulo:FigGeometrica{
    private:
        float raio;
        static int quantidade;
    public:
        Circulo():FigGeometrica()
        {
            this->setRaio(0);
            quantidade++;
        }//fim Circulo()
        Circulo(float raio):FigGeometrica()
        {
            this->setRaio(raio);
            quantidade++;
        }//fim Circulo()
        void setRaio(float raio)
        {
            this->raio = raio;
        }//fim setRaio()
        float getRaio()
        {
            return this->raio;
        }//fim getRaio()
        void leCirculo()
        {
            this->leRaio();
        }//fim leCirculo()
        void leRaio()
        {
            float raio;
            cout << "\nDetermine o raio deste circulo: ";
            cin >> raio;
            this->setRaio(raio);
        }//fim leRaio()
        float perimetro()
        {
            float perim;
            perim = 2 * 3.14 * this->raio;
            return perim;
        }//fim perimetro()
        float Area()
        {
            float area;
            area = 3.14 * this->raio * this->raio;
            return area;
        }//fim area()

};
int Circulo::quantidade = 0;

class Triangulo:FigGeometrica{
    private:
        float a;
        float b;
        float c;
        static int quantidade;
    public:
        Triangulo():FigGeometrica()
        {
            this->setTriangulo(0, 0, 0);
            quantidade++;
        }//fim Triangulo()
        Triangulo(float a):FigGeometrica()
        {
            this->setTriangulo(a, a, a);
            quantidade++;
        }//Triangulo
        Triangulo(float a, float b, float c):FigGeometrica()
        {
            this->setTriangulo(a, b, c);
            quantidade++;
        }//fim Triangulo()
        void setTriangulo(float a, float b, float c)
        {
            this->a = a;
            this->b = b;
            this->c = c;
        }//fim setTriangulo()
        float getA()
        {
            return this->a;
        }//fim getA()
        float getB()
        {
            return this->b;
        }//fim getB
        float getC()
        {
            return this->c;
        }//fim getC
        void leTriangulo()
        {
            this->leLados();
        }//fim leTriangulo()
        void leLados()
        {
            float a;
            float b;
            float c;
            cout << "\nDetermine os tres lados do triangulo\n";
            cin >> a;
            cin >> b;
            cin >> c;
            this->setTriangulo(a, b, c);
        }//fim leLados
        float perimetro()
        {
            float perim;
            perim = this->a + this->b + this->c;
            return perim;
        }//fim perimetro()
        bool valido()
        {
            bool val = false;
            if(this->a + this->b > this->c && this->a + this->c > this->b && this->b + this->c > this->a) val = true;
            return val;
        }//fim valido()
};
int Triangulo::quantidade = 0;

void MenuCirculo();
void criaCirculo(Circulo *circulos[]);
void listaCirculos(Circulo *circulos[]);
void MenuQuadrado();
void criaQuadrado(Quadrado *quadrados[]);
void listaQuadrados(Quadrado *quadrados[]);
void MenuTriangulo();
void criaTriangulo(Triangulo *triangulos[]);
void listaTriangulos(Triangulo *triangulos[]);

int main()
{
    int opcao;
    do{
        cout << "\n\t\tMENU PRINCIPAL\t\t";
        cout << "\n\t\tNo momento ha " << FigGeometrica::Quantidade() << "figuras geometricas criadas, sendo " << FigGeometrica::Quantidade() << " o numero total de figuras geometricas criadas";
        cout << "\n\tDigite [0] para sair do programa!";
        cout << "\n\tDigite [1] para circulos!";
        cout << "\n\tDigite [2] para quadrados!";
        cout << "\n\tDigite [3] para triangulos!\n\t";
        cin >> opcao;
        switch(opcao){
        case 0:
            cout << "\nObrigado por utilizar esse programa!";
            break;
        case 1:
            MenuCirculo();
            break;
        case 2:
            MenuQuadrado();
            break;
        case 3:
            MenuTriangulo();
            break;
        }//fim switch
    }while(opcao != 0);
    return 0;
}//fim main()

void MenuCirculo()
{
    Circulo *circulos[100];
    int opcao;
    do{
        cout << "\n\t\tMENU PRINCIPAL CIRCULOS\t\t";
        cout << "\n\tDigite [0] para voltar ao menu primario!";
        cout << "\n\tDigite [1] para criar um circulo!";
        cout << "\n\tDigite [2] para listar circulos!";
        cin >> opcao;
        switch(opcao){
        case 0:
            return;
            break;
        case 1:
            criaCirculo(circulos);
            break;
        case 2:
            listaCirculos(circulos);
            break;
        }//fim switch
    }while(opcao != 0);
}//fim MenuCirculo()

void criaCirculo(Circulo *circulos[])
{
    circulos[TAMCirculo] = new Circulo;
    circulos[TAMCirculo]->leCirculo;
    TAMCirculo++;
}//fim criaCirculos()

void listaCirculos(Circulo *circulos[])
{
    for(int i = 0; i < TAMCirculo; i++){
        cout << "\nRaio do circulo " << (i + 1) << " = " << circulos[i]->getRaio();
        cout << "\nPerimetro do Circulo " << (i + 1) << " = " << circulos[i]->perimetro();
        cout << "\nArea do circulo " << (i + 1) << " = " << circulos[i]->Area();
    }//fim for
}//fim listaCiruclos()

void MenuQuadrado()
{
    Quadrado *quadrados[100];
    int opcao;
    do{
        cout << "\n\t\tMENU PRINCIPAL QUADRADOS\t\t";
        cout << "\n\tDigite [0] para voltar ao menu primario!";
        cout << "\n\tDigite [1] para criar um quadrado!";
        cout << "\n\tDigite [2] para listar quadrados!";
        cin >> opcao;
        switch(opcao){
        case 0:
            return;
            break;
        case 1:
            criaQuadrado(quadrados);
            break;
        case 2:
            listaQuadrados(quadrados);
            break;
        }//fim switch
    }while(opcao != 0);
}//fim MenuQuadrado()

void criaQuadrado(Quadrado *quadrados[])
{
    quadrados[TAMQuadrado] = new Quadrado;
    quadrados[TAMQuadrado]->leQuadrado;
    TAMQuadrado++;
}//fim criaQuadrado()

void listaQuadrados(Quadrado *quadrados[])
{
    for(int i = 0; i < TAMQuadrado; i++){
        cout << "\nLado do quadrado " << (i + 1) << " = " << quadrados[i]->getLado();
        cout << "\nPerimetro do quadrado " << (i + 1) << " = " << quadrados[i]->perimetro();
        cout << "\nArea do quadrado " << (i + 1) << " = " << quadrados[i]->Area();
    }//fim for
}//fim listaQuadrados()

void MenuTriangulo()
{
    Triangulo *triangulos[100];
    int opcao;
    do{
        cout << "\n\t\tMENU PRINCIPAL TRIANGULOS\t\t";
        cout << "\n\tDigite [0] para voltar ao menu primario!";
        cout << "\n\tDigite [1] para criar um triangulo!";
        cout << "\n\tDigite [2] para listar triangulos!";
        cin >> opcao;
        switch(opcao){
        case 0:
            return;
            break;
        case 1:
            criaTriangulo(triangulos);
            break;
        case 2:
            listaTriangulos(triangulos);
            break;
        }//fim switch
    }while(opcao != 0);
}//fim MenuTriangulo()

void criaTriangulo(Triangulo *triangulos[])
{
    triangulos[TAMTriangulo] = new Triangulo;
    triangulos[TAMTriangulo]->leTriangulo();
    TAMTriangulo++;
}//fim criaTriangulo()

void listaTriangulos(Triangulo *triangulos[])
{
    for(int i = 0; i < TAMTriangulo; i++){
        cout << "\nLados Triangulo " << (i + 1) << " = " << triangulos[i]->getA();
        cout << "\n\t\t" << triangulos[i]->getB();
        cout << "\n\t\t" << triangulos[i]->getC();
        cout << "\nPerimetro do Triangulo " << (i + 1) << " = " << triangulos[i]->perimetro();
    }//fim for
}//fim listaTriangulos()
