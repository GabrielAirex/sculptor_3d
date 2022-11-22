#ifndef PUTELLIPSOID_H
#define PUTELLIPSOID_H
#include "figurageometrica.h"
#include "sculptor.h"

/**
 * @brief A classe PutEllipsoid habilita um trecho que satisfaz a equação de uma elipsoide de Voxels na estrutura 3D.
 * @details A partir da classe PutEllipdsoid, será escrito "putellipsoid" no arquivo de leitura da escultura dentre os valores: centro x, y, z e raios rx, ry, rz.
 */
class PutEllipsoid : public FiguraGeometrica{
    int xcenter, ycenter, zcenter, rx, ry, rz;
public:
   /**
     * @brief PutEllipsoid : Define elipse para ser escrita na Escultura
     * @param xcenter : x do centro da elipse
     * @param ycenter : y do centro da elipse
     * @param zcenter : z do centro da elipse
     * @param rx : raio da elipse na direção x
     * @param ry : raio da elipse na direção y
     * @param rz : raio da elipse na direção z
     * @param r : tons de cor vermelha 
     * @param g : tons de cor verde
     * @param b : tons de cor azul
     * @param a : transparência
     */
    PutEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz, float r, float g, float b, float a);
    /**
     * @brief ~PutEllipsoid : Destrutor da classe PutEllipsoid
     */
    ~PutEllipsoid(){};
    /**
     * @brief draw : Método que faz a figura ser desenhada na Escultura
     * @param s: Escultura alocada que irá receber a figura em questão 
     */
    void draw(Sculptor &s);
};

#endif // PUTELLIPSOID_H
