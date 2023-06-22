#include "sculptor.hpp"


int main()
{
    Sculptor model(30,30,30); // Tamanho do modelo
       model.setColor(255,255,0,1);

    // Criando o PacMan
    model.putSphere(10,10,10,5);

  
    // Criando o arquivo
    model.writeOFF("model.off");
    return 0;
}