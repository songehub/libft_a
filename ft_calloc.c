/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccrecent <ccrecent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 10:48:50 by ccrecent          #+#    #+#             */
/*   Updated: 2022/09/29 11:10:27 by ccrecent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// void	*ft_calloc(size_t count, size_t size)
// {
// size_t rest;

// rest = 0;
// rest = (size_t *)malloc(, sizeof(size_t) * size)




// }


#include <stdio.h>
#include <stdlib.h>
 
int main()
{
	/ * 1. Lo que devuelve malloc es tipo void *, cuando sea necesario, realice una conversión adecuada para el tipo de puntero de destino, por ejemplo aquí en int *;
		 Si es char * p_a = (char *) malloc (10);
	*/
	int *p_a = (int *)malloc(10 * sizeof(int));
	 // int * p_a = (int *) malloc ((size_t) (1024 * 1024 * 1024 * 2)); // La ejecución de esta oración fallará,
                 // Entonces, después de malloc, debemos decidir si solicitar la memoria con éxito
	if (!p_a)
	{
		 printf ("error de malloc, p_a =% p \ n", p_a);
		exit(1);
	}
 
	 // 2. El valor de la memoria asignada por malloc es aleatorio
	 printf ("La memoria que Malloc acaba de solicitar es: \ n");
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", *(p_a + i));
	}
	printf("\n");
 
 
	 // Asignar valor inicial
	for (int i = 0; i < 10; i++)
	{
		*(p_a + i) = i;
	}
	 printf ("Datos inicializados: \ n");
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", *(p_a + i));
	}
	printf("\n");
 
	 printf ("p_a antes libre =% p \ n", p_a);
 
	free(p_a);
	//p_a = NULL;
 
 
	 // 3. El valor del área de memoria señalado después de probar gratis
	 printf ("p_a después de free =% p \ n", p_a);
	 printf ("El valor del área de memoria señalado después de probar free: \ n");
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", *(p_a + i));
	}
	printf("\n");
/*
	 printf ("Test free también escribe datos en el espacio de memoria al que apunta: \ n");
	for (int i = 0; i < 10; i++)
	{
		 * (p_a + i) = i; // Escribir datos en el espacio después del error de programa libre
	}
*/
	 printf ("Fin del programa \ n");
	return 0;
}