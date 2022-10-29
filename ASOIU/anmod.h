#ifndef ANMOD_H
#define ANMOD_H
#include <algorithm>

class anmod
{
public:
    anmod(float K1,float K2,float delt, float N, float Td,float Tf,float tk, float tc, float tdc, float c, float m, float Y);
    void calculate();
    ////////////////
    float lmf;
    float lm;
    float Tk;
    float Tcp;
    float Tdc;
    float Treact;
    float Tckl;

    float chnl;
    float cpu;
    float cd;
    float stt;
    float usr;
    int itr=0;

private:
    float K1;
    float K2;
    float delt;

    float N;
    float Td;
    float Tf;
    float tk;
    float tc;
    float tdc;
    float c;
    float m;
    float Y;
};

#endif // ANMOD_H
