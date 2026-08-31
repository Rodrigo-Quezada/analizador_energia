#include<iostream>
#include<cstdlib>
#include<vector>
#include "analizador.hpp"
using namespace std;
int main(int argc,char **argv){
if(argc<3){ // fundamental y al menos un armonico
cerr<<"Error: Parametros insuficientes en la linea de comandos"<<endl;
cerr<<"Uso: ./analizador [V_fundamental] [V_armonico1] [V_armonico2]"<<endl;
return 1;
}
float fundamental=static_cast<float>(atof(argv[1]));
vector<float> armonicos;
vector<float> samples;
samples.push_back(fundamental);
for(int i=2;i<argc;i++){
float arm=static_cast<float>(atof(argv[i]));
armonicos.push_back(arm);
samples.push_back(arm);
}
IndicadoresElectricos red;
red.v_rms=calcularRMS(samples);
red.thd=calcularTHD(fundamental,armonicos);
cout<<"analizador de potencia modular"<<endl;
cout<<"componente fundamental: "<<fundamental<<"V"<<endl;
cout<<"numero de armonicos: "<<armonicos.size()<<endl;
cout<<"V_RMS total red: "<<red.v_rms<<"V"<<endl;
cout<<"THD: "<<red.thd*100.0f<<"%"<<endl;
return 0;
}
