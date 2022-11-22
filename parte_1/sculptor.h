#ifndef sculptor_h
#define sculptor_h
#include <iostream>

using namespace std;

struct Voxel{
    float r,g,b;
    float a;

    bool isOn;
};

class Sculptor {
protected:
  Voxel ***v;

  int nx,ny,nz;
  float r,g,b,a;
public:

  /**
       * @details Sculptor é o cosntrutor da classe
       * @param _nx numero de linhas (eixo x)
       * @param _ny numero de colunas (eixo y )
       * @param _nz numero de planoz (eixo z )
       * */

  Sculptor(int _nx, int _ny, int _nz);

  /**
       * @details ~Sculptor é o destrutor da classe, ele desaloca os vetores dinamicos
       * */


  ~Sculptor();

  /**
   * @details Altera a cor e a transparencia
   *
   * */


  void setColor(float r, float g, float b, float alpha);


  /**
   * @details Plota um voxel
   *
   * */



  void putVoxel(int x, int y, int z);


  /**
   * @details Desplota um voxel
   *
   * */
  void cutVoxel(int x, int y, int z);



  /**
   * @details Plota um conjunto de voxels que satisfazem os parametros de um cubo
   *
   * */

  void putBox(int x0, int x1, int y0, int y1, int z0, int z1);



  /**
   * @details Desplota um conjunto de voxels que satisfazem os parametros de um cubo
   *
   * */

  void cutBox(int x0, int x1, int y0, int y1, int z0, int z1);

  /**
   * @details Plota um conjunto de voxels que satisfazem os parametros de uma esfera
   *
   * */


  void putSphere(int xcenter, int ycenter, int zcenter, int radius);

  /**
   * @details Desplota um conjunto de voxels que satisfazem os parametros de uma esfera
   *
   * */

  void cutSphere(int xcenter, int ycenter, int zcenter, int radius);

  /**
   * @details Plota um conjunto de voxels que satisfazem os parametros de uma elipse
   *
   * */

  void putEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz);


  /**
   * @details Desplota um conjunto de voxels que satisfazem os parametros de uma elipse
   *
   * */

  void cutEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz);

  void writeOFF(char* filename);
};

#endif // SCULPTOR_H
