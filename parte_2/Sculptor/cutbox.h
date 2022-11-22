#ifndef CUTBOX_H
#define CUTBOX_H
#include "figurageometrica.h"
#include "sculptor.h"

/**
 * @brief A classe CutBox desabilita uma caixa (paralelepípedo) de Voxels na estrutura 3D.
 * @details A partir da classe Cutbox, será escrito "cutbox" no arquivo de leitura da escultura dentre os intervalos: x0 e x1, y0 e y1, z0 e z1.
 */
class CutBox : public FiguraGeometrica{
    int x0, x1, y0, y1, z0, z1;
public:
    /**
     * @brief CutBox : Define caixa retangular para ser removida
     * @param x0 : largura inicial da caixa de Voxels
     * @param x1 : largura final da caixa de Voxels
     * @param y0 : altura inicial da caixa de Voxels
     * @param y1 : altura final da caixa de Voxels
     * @param z0 : profundidade inicial da caixa de Voxels
     * @param z1 : profundidade final da caixa de Voxels
     */
    CutBox(int x0, int x1, int y0, int y1, int z0, int z1);
    /**
     * @brief ~CutBox : Destrutor da classe CutBox
     */
    ~CutBox(){};
    /**
     * @brief draw : Método que faz a figura ser desenhada na Escultura
     * @param s: Escultura alocada que irá receber a figura em questão 
     */
    void draw(Sculptor &s);
};

#endif // CUTBOX_H
