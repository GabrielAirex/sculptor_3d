#ifndef PUTVOXEL_H
#define PUTVOXEL_H
#include "figurageometrica.h"
#include "sculptor.h"

/**
 * @brief A classe PutVoxel habilita um Voxel (pixel de 3 dimensões) na estrutura 3D.
 * @details A partir da classe PutVoxel, será escrito "putevoxel" no arquivo de leitura da escultura habilitando o Voxel de coordenadas x, y, z.
 */
class PutVoxel : public FiguraGeometrica{
    int x,y,z;
public:
   /**
     * @brief PutVoxel : Define Voxel (x, y, z) para ser escrito na Escultura
     * @param x : coordenada x do Voxel
     * @param y : coordenada y do Voxel
     * @param z : coordenada z do Voxel
     * @param r : tons de cor vermelha 
     * @param g : tons de cor verde
     * @param b : tons de cor azul
     * @param a : transparência
     */
    PutVoxel(int x, int y, int z, float r, float g, float b, float a);
    /**
     * @brief ~PutVoxel : Destrutor da classe PutVoxel
     */
    ~PutVoxel(){};
     /**
     * @brief draw : Método que faz a figura ser desenhada na Escultura
     * @param s: Escultura alocada que irá receber a figura em questão 
     */
    void draw(Sculptor &s);
};

#endif // PUTVOXEL_H
