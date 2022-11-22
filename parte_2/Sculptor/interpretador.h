#ifndef INTERPRETADOR_H
#define INTERPRETADOR_H
#include <vector>
#include "figurageometrica.h"
#include <string>

/**
 * @brief A classe Interpretador é responsável por ler o arquivo alo.txt.
 * @details A classe serve para ler o arquivo de entrada de dimensões que comtém as dimensões da Escultura em x, y e z. E recebe qual tipo de figura deve ser desenhada ou apagada da Escultura, em cada linha do arquivo alo.txt
 */
class Interpretador{
    int dimx, dimy, dimz;
    float r, g, b, a;
public:
    /**
     * @brief Interpretador : Construtor padrão do Interpretador    
     */
    Interpretador();
    std::vector<FiguraGeometrica*> parse(std::string filename);
    /**
     * @brief getDimx : Dimensão em x da Escultura 
     */
    int getDimx();
    /**
     * @brief getDimy : Dimensão em y da Escultura 
     */
    int getDimy();
    /**
     * @brief getDimz : Dimensão em z da Escultura 
     */
    int getDimz();
};

#endif // INTERPRETADOR_H
