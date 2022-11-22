#ifndef PUTSPHERE_H
#define PUTSPHERE_H
#include "figurageometrica.h"
#include "sculptor.h"


/**
 * @brief A classe PutSphere habilita um trecho que satisfaz a equação de uma esfera de Voxels na estrutura 3D.
 * @details A partir da classe PutEsphere, será escrito "putesphere" no arquivo de leitura da escultura dentre os valores: centro x, y, z e raio r.
 */
class PutSphere : public FiguraGeometrica{
    int xcenter, ycenter, zcenter, radius;
public:
  /**
     * @brief Putsphere : Define esfera para ser escrita na Escultura
     * @param xcenter : x do centro da esfera
     * @param ycenter : y do centro da esfera
     * @param zcenter : z do centro da esfera
     * @param radius : raio da esfera 
     * @param r : tons de cor vermelha 
     * @param g : tons de cor verde
     * @param b : tons de cor azul
     * @param a : transparência
     */
    PutSphere(int xcenter, int ycenter, int zcenter, int radius, float r, float g, float b, float a);
    /**
     * @brief ~PutSphere : Destrutor da classe PutSphere
     */
    ~PutSphere(){};
    /**
     * @brief draw : Método que faz a figura ser desenhada na Escultura
     * @param s: Escultura alocada que irá receber a figura em questão 
     */
    void draw(Sculptor &s);
};

#endif // PUTSPHERE_H
