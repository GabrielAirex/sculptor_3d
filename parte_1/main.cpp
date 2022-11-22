#include "sculptor.h"
#include "sculptor.cpp"
#include <iostream>
#include <fstream>
#include <string>
#include <math.h>

using namespace std;

int main(){
    Sculptor project(100,100,100);
    project.setColor(1,0.7,0.8,0.1);
    project.putVoxel(0,0,0);
    //project.cutVoxel(0,0,0);
    project.setColor(1,0.0,0.0,0.1);

    project.putBox(5,7,8,9,10,12);
    project.cutBox(0,3,0,0,0,0);
    project.setColor(0,1,0,1);

    project.putSphere(12, 12, 12, 4);
    project.cutSphere(10,10,10,2);
    project.setColor(1.0, 1.0, 0.0 , 0.8);
    project.putEllipsoid(7, 5, 4, 4, 3, 2);
    //project.cutSphere(12, 12, 12, 2);

    //project.cutSphere(0,0,0,5);

    project.writeOFF("project.off");
    return 0;
}
