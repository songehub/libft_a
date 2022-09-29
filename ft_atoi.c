/* *************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccrecent <ccrecent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 11:14:10 by ccrecent          #+#    #+#             */
/*   Updated: 2022/09/29 11:16:05 by ccrecent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <xlocale.h>
#include <stdio.h>
#include <string.h>

int	atoi(const char *str)
{


atoi, atoi_l -- convert ASCII string to integer


DESCRIPCIÓN
      La función atoi() convierte la parte inicial de la cadena a la que apunta str en representación int.

      es equivalente a:

            (int)strtol(str, (char **)NULL, 10);

      Mientras que la función atoi() usa la configuración regional actual, la función atoi_l() puede recibir una configuración regional directamente. Ver
      xlocale(3) para obtener más información.

NOTAS DE IMPLEMENTACIÓN
      Las funciones atoi() y atoi_l() son seguras para subprocesos y asíncronas para cancelar.

      Se recomiendan las funciones strtol() y strtol_l() en lugar de las funciones atoi() y atoi_l(), especialmente en nuevos
      código.

}

int main(void)
{
    char str[] = "-i12389789";
    int rest = ft_atoi(str);
    printf ("%d ", rest);
	int rest_test = atoi(str);
    printf ("%d ", rest_test);
    return (0);
}

