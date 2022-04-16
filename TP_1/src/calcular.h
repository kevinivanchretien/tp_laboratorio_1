/*
 * calcular.h
 *
 *  Created on: 14 abr. 2022
 *      Author: kevin
 */

#ifndef CALCULAR_H_
#define CALCULAR_H_


/// @brief muestra el menu
/// @param
/// @return un int con la opcion elegida
int menu();



///CALCULA EL DESCUENTO
/// @param precio variable del precio
/// @param interes variable del porcentaje
/// @return el precio con el descuento
 float debito(float precio, int descuento);

/// CALCULA EL AUMENTO
/// @param variable del precio
/// @param variable del porcentaje
/// @return el precio con el aumento
 float credito(float precio, int interes);


 /// CALCULA EL COSTO EN BITCOIN
 /// @param variable del precio
 /// @return el valor del pasaje en bitcoin
 float bitcoin(float precio);

/// CALCULA EL VALOR POR KILOMETRO
/// @param precio
/// @param kilometros
/// @return el valor del km
 float unitario(float precio, int kilometros);

/// LA DIFERENCIA DE PRECIOS
/// @param precio latam
/// @param precio aerolineas
/// @return devuelve la diferencia
 float resta(float latam, float aerolineas);

#endif /* CALCULAR_H_ */
