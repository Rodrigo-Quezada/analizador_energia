#include "analizador.hpp"
#include<cmath>
// voltaje RMS de senal
float calcularRMS(const std::vector<float>& muestras){
if(muestras.empty()) return 0.0f;
float suma_cuadrados=0.0f;
for(size_t i=0;i<muestras.size();i++){
suma_cuadrados+=muestras[i]*muestras[i];
}
return std::sqrt(suma_cuadrados);
}
// thd respecto a la fundamental
float calcularTHD(float fundamental,const std::vector<float>& armonicos){
if(fundamental==0.0f || armonicos.empty()) return 0.0f;
float suma_cuadrados_armonicos=0.0f;
for(size_t i=0;i<armonicos.size();i++){
suma_cuadrados_armonicos+=armonicos[i]*armonicos[i];
}
return std::sqrt(suma_cuadrados_armonicos)/fundamental;
}
