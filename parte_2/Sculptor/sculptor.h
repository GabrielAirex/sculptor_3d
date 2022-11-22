#ifndef SCULPTOR_H
#define SCULPTOR_H

/**
 * @brief The Voxel struct:
     * Voxels (volume elements), equivalente aos pixels das imagens digitais, porém em 3 dimensões.
     * Nos Voxels é possível armazenar informações como cor e transparência da cor, necessárias para idealizar os elementos de uma escultura.
     * @param r : intensidade da cor vermelha, varia entre [0 - 255]
     * @param g : intensidade da cor verde, varia entre [0 - 255]
     * @param b : intensidade da cor azul, varia entre [0 - 255]
     * @param a : opacidade do voxel, varia entre [0 - 1]
     * @param isOn : define se o voxel esta ativo ou nao, assume como valores 0 (desativado) ou 1 (ativado)
 */
struct Voxel {
  float r,g,b; // Cores
  float a;    // Transparencia
  bool isOn; // Ativou ou não 
};


/**
 * @brief A classe Sculptor
 * monta uma estrutura alocada dinamicamente e fornece os metodos para manipular os pixels de uma matriz tridimensional
 */
class Sculptor {
protected:
     /**
     * @brief v: matriz 3D alocada dinamicamente que armazena todos os voxels
     */
  Voxel ***v;      // Matriz 3D
     /**
     * @brief nx: dimensao em x (numero de linhas)
     */
    int nx;
     /**
     * @brief ny: dimensao em y (numero de colunas)
     */
    int ny;
     /**
     * @brief nz: dimensao em z (numero de planos)
     */
    int nz;
     /**
     * @brief r: intensidade atual da cor vermelha, varia entre [0 - 1]
     */
    float r;
     /**
     * @brief g: intensidade atual da cor verde, varia entre [0 - 1]
     */
    float g;
     /**
     * @brief b: intensidade atual da cor azul, varia entre [0 - 1]
     */
    float b;
     /**
     * @brief a: intensidade atual da opacidade, varia entre [0 - 1]
     */
    float a;
public:
     /**
     * @brief Sculptor: Construtor da classe Sculptor
     * @param _nx : dimensao em x da escultura 3D (número de linhas)
     * @param _ny : dimensao em y da escultura 3D (númer de colunas)
     * @param _nz : dimensao em z da escultura 3D (número de planos)
     */ 
  Sculptor(int _nx, int _ny, int _nz);
      /**
      * @brief ~Sculptor: Destrutor da classe Sculptor
      */
  ~Sculptor();
     /**
     * @brief setColor : Define a cor atual do desenho
     * @param r : intensidade da cor vermelha, varia entre [0-1]
     * @param g : intensidade da cor verde, varia entre [0-1]
     * @param b : intensidade da cor azul, varia entre [0-1]
     * @param alpha : opacidade do voxel, varia entre [0-1]
     */
  void setColor(float r, float g, float b, float alpha);
     /**
     * @brief putVoxel : Ativa o voxel na posição (x,y,z) (fazendo isOn = true) e atribui ao mesmo a cor atual de desenho
     * @param x : coordenada em relacao ao eixo x
     * @param y : coordenada em relacao ao eixo y
     * @param z : coordenada em relacao ao eixo z
     */  
  void putVoxel(int x, int y, int z);
     /**
     * @brief cutVoxel : Desativa o voxel na posição (x,y,z) (fazendo isOn = false)
     * @param x : coordenada em relacao ao eixo x
     * @param y : coordenada em relacao ao eixo y
     * @param z : coordenada em relacao ao eixo z
     */  
  void cutVoxel(int x, int y, int z);
     /**
     * @brief writeOFF : grava a escultura no formato OFF no arquivo filename
     * @param filename : caminho do arquivo escultura.off
     */
  void writeOFF(char* filename);
  
};

#endif // SCULPTOR_H
