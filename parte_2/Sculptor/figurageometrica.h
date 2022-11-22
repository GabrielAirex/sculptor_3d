#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H
#include "sculptor.h"

/**
 * @brief A classe FiguraGeometrica é uma classe abstrata.
 * @details A classe serve para representar figuras geométricas de forma geral, onde cada Classe de cada tipo de figura geométrica possa se "desenhar" na Escultura. A Classe também irá armazenar os valores de r, g, b e a (cores e transparência da figura em questão).
 */
class FiguraGeometrica{
protected:
    float r,g,b,a;
public:
   /**
     * @brief ~FiguraGeometrica : Destrutor da classe FiguraGeometrica
     */
    virtual ~FiguraGeometrica(){};
    /**
     * @brief draw : Método que faz a figura ser desenhada na Escultura
     * @param s: Escultura alocada que irá receber a figura em questão 
     */
    virtual void draw(Sculptor &s)=0;
    FiguraGeometrica(); // construtor padrão FiguraGeometrica para poder usá-lo em figugeomatrica.cpp


};

#endif // FIGURAGEOMETRICA_H
