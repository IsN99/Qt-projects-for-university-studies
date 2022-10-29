#include "anmod.h"

anmod::anmod(float K1,float K2,float delt, float N, float Td,float Tf,float tk, float tc, float tdc, float c, float m, float Y)
{
    this-> K1 = K1;
    this-> K2 =K2;
    this-> delt=delt;

    this-> N=N;
    this-> Td=Td;
    this-> Tf=Tf;
    this-> tk=tk;
    this-> tc=tc;
    this-> tdc=tdc;
    this-> c=c;
    this-> m=m;
    this-> Y=Y;
    ////////////////
    calculate();

}

void anmod:: calculate(){
    float p=1/m;
    float bett=1/(1-Y);
    float a1=1/(2*tk);
    float a2=c/(bett*tc);
    float a3=1/(bett*p*tdc);
    float lmf1=K1*std::min(a1,std::min(a2,a3))*(N-1)/N;//начальный фоновый поток

    while(true){
        //средние времена пребывания в канале цп и диске
        Tk=(2*tk)/(1-2*lmf1*tk);
        Tcp=(bett*tc)/(1-std::pow((bett*lmf1*tc/c),c));
        Tdc=(bett*tdc)/(1-bett*p*lmf1*tdc);
        //время цикла
        Tckl=Td+Tf+Tk+Tcp+Tdc;
        lmf=(N-1)/(Tckl);
        //сравнение потоков
        if(std::fabs(lmf1-lmf)/lmf < delt)
            {break;}

        float sigm1=(std::fabs(lmf1-lmf)/K2);
        lmf1=(lmf1-sigm1);
        itr++;
    }

    Treact=Tckl-Tf;
    lm=N/Tckl;
    chnl=2*lm*tk;
    stt=(Td+Tf)/Tckl;
    usr=Tf/Tckl;
    cpu=bett*lm*(tc/c);
    cd=bett*Y*lm*tdc;
    lmf=lmf1;
}
