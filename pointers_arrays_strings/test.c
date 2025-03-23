#include "main.h"
#include <stdio.h>

/**
 * _atoi - Convertit une chaîne de caractères en entier.
 * @s: La chaîne à convertir.
 *
 * Return: L'entier converti ou la valeur max/min en cas d'overflow.
 */
int _atoi(char *s)
{
    int i = 0;
    int sign = 1;
    int result = 0;
    int prev_result = 0;  // Pour détecter l'overflow

    // Calcul dynamique de INT_MAX et INT_MIN
    int max_int = ((unsigned int) -1) >> 1;   // Équivalent de 2147483647
    int min_int = -max_int - 1;               // Équivalent de -2147483648

    // Ignorer les caractères avant les chiffres
    while (s[i] && (s[i] < '0' || s[i] > '9'))
    {
        if (s[i] == '-')
            sign = -sign;  // Inverser le signe
        i++;
    }

    // Convertir les chiffres en entier
    while (s[i] >= '0' && s[i] <= '9')
    {
        prev_result = result;
        result = result * 10 + (s[i] - '0');

        // Vérification de l'overflow
        if (result / 10 != prev_result)
        {
            if (sign == 1)
                return max_int;  // Retourne INT_MAX
            else
                return min_int;  // Retourne INT_MIN
        }

        i++;
    }

    return (result * sign);
}

