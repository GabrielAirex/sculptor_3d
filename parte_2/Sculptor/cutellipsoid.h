#ifndef CUTELLIPSOID_H
#define CUTELLIPSOID_H
#include "figurageometrica.h"
#include "sculptor.h"

/**
 * @brief A classe CutEllipsoid desabilita um trecho que satisfaz a equação de uma elipsoide de Voxels na estrutura 3D.
 * @details A partir da classe CutEllipdsoid, será escrito "cutellipsoid" no arquivo de leitura da escultura dentre os valores: centro x, y, z e raios rx, ry, rz.
 */
class CutEllipsoid : public FiguraGeometrica{
     int xcenter, ycenter, zcenter, rx, ry, rz;
public:
   /**
     * @brief CutEllipsoid : Define elipse para ser removida
     * @param xcenter : x do centro da elipse
     * @param rx : raio da elipse na direção x
     * @param ycenter : y do centro da elipse
     * @param ry : raio da elipse na direção y
     * @param zcenter : z do centro da elipse
     * @param rz : raio da elipse na direção z
     */
     CutEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz);
     /**
     * @brief ~CutEllipsoid : Destrutor da classe CutEllipsoid
     */
     ~CutEllipsoid(){};
     /**
     * @brief draw : Método que faz a figura ser desenhada na Escultura
     * @param s: Escultura alocada que irá receber a figura em questão 
     */
     void draw(Sculptor &s);
};

#endif // CUTELLIPSOID_H
