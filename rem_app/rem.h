#ifndef REM_H
#define REM_H

#include <cmath>

class ReM
{
public:
    ReM(float tno, float to, int N, int C, float S1, float S);
    float P ();
    float Pk (int k);
    float Q ();
    float L ();
    float U ();
    float pO();
    ////////////////////
    float getP0(){
        return P0;
    }
    float getQ0(){
        return Q0;
    }
    float getL0(){
        return L0;
    }
    float getU0(){
        return U0;
    }
    float getp0(){
        return p0;
    }
    float getn(){
        return n;
    }
    float getpe(){
        return pe;
    }
    float getW(){
        return W;
    }
    float getTp(){
        return Tp;
    }
    float getT(){
        return T;
    }
    float getY(){
        return Y;
    }
private:
    float tno;
    float to;
    int N;
    int C;
    float S1;
    float S;
    //////////////
    float P0;
    float Q0;
    float L0;
    float U0;
    float p0;
    float n;
    float pe;
    float W;
    float Tp;
    float T;
    float Y;
};

#endif // REM_H
