#ifndef PONTO_H_INCLUDED
#define PONTO_H_INCLUDED

using namespace std;

class Ponto {

    private:
        double x, y;

    public:
        Ponto() = default;
        Ponto(double x, double y);

        double getX();
        void setX(double newX);

        double getY();
        void setY(double newY);  

};

Ponto::Ponto(double x, double y) {

    this->x = x;
    this->y = y;

}

double Ponto::getX() {return x;}
void Ponto::setX(double newX) {this->x = newX;}

double Ponto::getY() {return y;}
void Ponto::setY(double newY) {this->y = newY;} 

#endif