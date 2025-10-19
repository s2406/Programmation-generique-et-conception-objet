/**
 * @file Minimum.h
 *
 * @brief Patron de fonctions Minimum
 *
 * Programmation generique et conception objet
 */

#ifndef MINIMUM_H_
#define MINIMUM_H_

#endif /*MINIMUM_H_*/

/**
 * @brief Calcul du minimum de 2 items
 * @param[in] 2 items
 * @return minimum
 */
template <typename T> 
T Minimum(T x, T y){
return x < y ? x : y;
}

/**
 * @brief Calcul du minimum de 3 items
 * @param[in] 3 items
 * @return minimum
 */
template <typename T> 
T Minimum(T x, T y, T z){
return Minimum(Minimum(x, y), z);
}

