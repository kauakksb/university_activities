#include <iostream>
#include <cmath>
#include <vector>
#include <iomanip>

namespace figs{

class Ponto
{
    private:
        int x;
        int y;

    public:
        Ponto();

        Ponto(const int _x, const int _y);

        ~Ponto();

        void setXY(const int x, const int y);

        int getX();

        int getY();
};

Ponto::Ponto()
{
    // std::cout << "Ponto criado" << std::endl;
}

Ponto::Ponto(const int x, const int y)
{
    this->x = x;
    this->y = y;
    // std::cout << "Ponto criado" << std::endl;
}

Ponto::~Ponto()
{
    // std::cout << "Ponto destruido" << std::endl;
}

void Ponto::setXY(const int x, const int y)
{
    this->x = x;
    this->y = y;
}

int Ponto::getX()
{
    return this->x;
}

int Ponto::getY()
{
    return this->y;
}

class FiguraGeometrica
{
    private:
        Ponto centro;

    public:

        FiguraGeometrica(const int x_centro, const int y_centro);

        virtual ~FiguraGeometrica();

        virtual void Desenha();

        virtual float CalculaArea() = 0;

};

FiguraGeometrica::FiguraGeometrica(const int x_centro, const int y_centro)
{
    this->centro.setXY(x_centro, y_centro);
    // std::cout << "Figura criada" << std::endl;
}

FiguraGeometrica::~FiguraGeometrica()
{
    // std::cout << "Figura destruida" << std::endl;
}

void FiguraGeometrica::Desenha()
{
    std::cout << this->centro.getX() << " " << this->centro.getY() << " ";
}

class Retangulo: public FiguraGeometrica
{
    private:
        int lado1;
        int lado2;

    public:

        Retangulo(const int x_centro, const int y_centro, const int lado1, const int lado2);

        ~Retangulo();

        void Desenha();

        float CalculaArea();
        
};

Retangulo::Retangulo(const int x_centro, const int y_centro, const int lado1, const int lado2) : FiguraGeometrica(x_centro, y_centro)
{
    this->lado1 = lado1;
    this->lado2 = lado2;
    // std::cout << "Retangulo criado" << std::endl;
}

Retangulo::~Retangulo()
{
    // std::cout << "destruindo Retangulo" << std::endl;
}

void Retangulo::Desenha()
{
    FiguraGeometrica::Desenha();
    std::cout << "RETANGULO" << std::endl;
}

float Retangulo::CalculaArea()
{
    return (float)(this->lado1 * this->lado2);
}

class Circulo : public FiguraGeometrica
{
    private:
        int raio;

    public:
        Circulo(const int x_centro, const int y_centro, const int raio);

        ~Circulo();

        void Desenha();

        float CalculaArea();
};

Circulo::Circulo(const int x_centro, const int y_centro, const int raio) : FiguraGeometrica(x_centro, y_centro)
{
    this->raio = raio;
    // std::cout << "Circulo criado" << std::endl;
}

Circulo::~Circulo()
{
    // std::cout << "destruindo Circulo" << std::endl;
}

void Circulo::Desenha()
{
    FiguraGeometrica::Desenha();
    std::cout << "CIRCULO" << std::endl;
}

float Circulo::CalculaArea()
{
    return (float)((this->raio * this->raio) * M_PI);
}

class Triangulo : public FiguraGeometrica
{
    private:
        int base;
        int altura;

    public:
        Triangulo(const int x_centro, const int y_centro, const int base, const int altura);

        ~Triangulo();

        void Desenha();

        float CalculaArea();
};

Triangulo::Triangulo(const int x_centro, const int y_centro, const int base, const int altura) : FiguraGeometrica(x_centro, y_centro)
{
    this->base = base;
    this->altura = altura;
    // std::cout << "Triangulo criado" << std::endl;
}

Triangulo::~Triangulo()
{
    // std::cout << "destruindo Triangulo" << std::endl;
}

void Triangulo::Desenha()
{
    FiguraGeometrica::Desenha();
    std::cout << "TRIANGULO" << std::endl;
}

float Triangulo::CalculaArea()
{
    return (float)((this->base * this->altura) / 2);
}

}


int main()
{
    std::vector<figs::FiguraGeometrica*> figuras;
    figs::FiguraGeometrica* figura;
    bool condicao = true;

    while(condicao)
    {
        char leitura;
        int c1, c2, l1, l2, b, a, r;
        float area = 0;
        std::cin >> leitura;
        switch (leitura)
        {
        case 'R':
            std::cin >> c1;
            std::cin >> c2;
            std::cin >> l1;
            std::cin >> l2;
            figura = new figs::Retangulo(c1, c2, l1, l2);
            figuras.push_back(figura);
            break;
        
        case 'C':
            std::cin >> c1;
            std::cin >> c2;
            std::cin >> r;
            figura = new figs::Circulo(c1, c2, r);
            figuras.push_back(figura);
            break;

        case 'T':
            std::cin >> c1;
            std::cin >> c2;
            std::cin >> b;
            std::cin >> a;
            figura = new figs::Triangulo(c1, c2, b, a);
            figuras.push_back(figura);
            break;

        case 'D':
            for(figs::FiguraGeometrica* figura_it : figuras)
            {
                figura_it->Desenha();
            }
            break;

        case 'A':
            for(figs::FiguraGeometrica* figura_it : figuras)
            {
                area += figura_it->CalculaArea();
            }
            std::cout << std::fixed << std::setprecision(2) << area << std::endl;
            break;

        case 'E':
            for(figs::FiguraGeometrica* figura_it : figuras)
            {
                delete figura_it;
            }
            figuras.clear();
            condicao = false;
            break;

        default:
            break;
        }
    }
    return 0;
}