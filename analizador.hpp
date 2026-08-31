#ifndef ANALIZADOR_HPP
#define ANALIZADOR_HPP
#include<vector>
// un struct para almacenar indicadores calculados en la red
struct IndicadoresElectricos{
float v_rms;
float thd;
};
float calcularRMS(const std::vector<float>& muestras);
float calcularTHD(float fundamental, const std::vector<float>& armonicos);
#endif

