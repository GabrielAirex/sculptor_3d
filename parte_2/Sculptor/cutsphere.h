#ifndef CUTSPHERE_H
#define CUTSPHERE_H
#include "figurageometrica.h"
#include "sculptor.h"

/**
 * @brief A classe CutSphere desabilita um trecho que satisfaz a equação de uma esfera de Voxels na estrutura 3D.
 * @details A partir da classe CutEsphere, será escrito "cutesphere" no arquivo de leitura da escultura dentre os valores: centro x, y, z e raio r.
 */
class CutSphere : public FiguraGeometrica{
    int xcenter, ycenter, zcenter, radius;
public:
   /**
     * @brief Cutsphere : Define esfera para ser removida
     * @param xcenter : x do centro da esfera
     * @param ycenter : y do centro da esfera
     * @param zcenter : z do centro da esfera
     * @param radius : raio da esfera 
     */
    CutSphere(int xcenter, int ycenter, int zcenter, int radius);
    /**
     * @brief ~CutSphere : Destrutor da classe CutSphere
     */
    ~CutSphere(){};
    /**
     * @brief draw : Método que faz a figura ser desenhada na Escultura
     * @param s: Escultura alocada que irá receber a figura em questão 
     */
    void draw(Sculptor &s);
};

#endif // CUTSPHERE_H
