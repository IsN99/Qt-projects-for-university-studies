#include "rem.h"

ReM::ReM(float tno, float to, int N, int C, float S1, float S)
{
    this->tno=tno;
    this->to=to;
    this->N=N;
    this->C=C;
    this->S1=S1;
    this->S=S;
    /////////////////
    this->P0=P();
    this->Q0=Q();
    this->L0=L();
    this->U0=U();
    this->p0=pO();
    this->n=N-L0;
    this->pe=tno/(tno+(L0*tno)/(N-L0));
    this->W=((L0*tno)/(N-L0))-to;
    this->Tp=((L0*tno)/(N-L0));
    this->T=((L0*tno)/(N-L0))+tno;
    this->Y=(C*S1)+(L0*S);
}

float ReM:: P (){
    float Fp=0;
    for (int k=0; k<C+1; k++){
        Fp+=(tgamma(N+1)*powf(float(0.01),k))/(tgamma(k+1)*tgamma(N+1-k));
    }
    for (int k=C+1; k<N+1; k++){
        Fp+=(tgamma(N+1)*powf(float(0.01),k))/(pow(C,k-C)*tgamma(C+1)*tgamma(N+1-k));
    }
    return powf(Fp,-1);
}

float ReM:: Pk (int k){
    float Fp=0;
    if (k>=1 && k<=C){
        Fp=(tgamma(N+1)*powf(float(0.01),k))/(tgamma(k+1)*tgamma(N+1-k)) * P0 ;
    }
    else if (k>C && k<=N) {
        Fp+=(tgamma(N+1)*powf(float(0.01),k))/(pow(C,k-C)*tgamma(C+1)*tgamma(N+1-k))* P0;
    }

    return Fp;
}

float ReM:: Q (){
    float Fp = 0;
    for(int k=C; k<N+1; k++){
        Fp += (k-C)*Pk(k);
    }
    return Fp;
}

float ReM:: L (){
    float Fp = 0;
    for(int k=1; k<N+1; k++){
        Fp+=Pk(k)*k;
    }
    return Fp;
}

float ReM:: U (){
    return L0-Q0;
}

float ReM:: pO (){
    return U0/C;
}


