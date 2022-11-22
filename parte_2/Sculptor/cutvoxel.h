#ifndef CUTVOXEL_H
#define CUTVOXEL_H
#include "figurageometrica.h"
#include "sculptor.h"

/**
 * @brief A classe CutVoxel desabilita um Voxel (pixel de 3 dimensões) na estrutura 3D.
 * @details A partir da classe CutVoxel, será escrito "cutevoxel" no arquivo de leitura da escultura desabilitando o Voxel de coordenadas x, y, z.
 */
class CutVoxel : public FiguraGeometrica{
    int x,y,z;
public:
   /**
     * @brief CutVoxel : Define Voxel (x, y, z) para ser removido
     * @param x : coordenada x do Voxel
     * @param y : coordenada y do Voxel
     * @param z : coordenada z do Voxel
     */
    CutVoxel(int x, int y, int z);
    /**
     * @brief ~CutVoxel : Destrutor da classe CutVoxel
     */
    ~CutVoxel(){};
    /**
     * @brief draw : Método que faz a figura ser desenhada na Escultura
     * @param s: Escultura alocada que irá receber a figura em questão 
     */
    void draw(Sculptor &s);
};

#endif // CUTVOXEL_H
