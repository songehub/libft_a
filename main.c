/*
isalpha

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	int	c = 'F';

	printf("%d\n", ft_isalpha(c));
    printf("%d\n", isalpha(c));

   return (0);
}
------------------------------------------------------------------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------------------------------------------------------------------
*/

/*
isdigit
int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	int	c = '3';

	printf("%d\n", ft_isdigit(c));
    printf("%d\n", isdigit(c));

   return (0);
}

------------------------------------------------------------------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------------------------------------------------------------------
*/

/*
isalnum
int	ft_isalnum(int c)
{
	if (!(c >= '0' && c <= '9')
		&& !(c >= 'a' && c <= 'z') && !(c >= 'A' && c <= 'Z'))
		return (0);
	else
		return (1);
}

#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	int	c = ' ';

	printf("%i\n", ft_isalnum(c));
    printf("%i\n", isalnum(c));

   return (0);
}
------------------------------------------------------------------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------------------------------------------------------------------
*/

/*
isascii
int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}

#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	int	c = ' ';

	printf("%d\n", ft_isascii(c));
    printf("%d\n", isascii(c));

   return (0);
}

------------------------------------------------------------------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------------------------------------------------------------------
*/

/*
isprint

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	int	c = 8;

	printf("%d\n", ft_isprint(c));
    printf("%d\n", isprint(c));

   return (0);
}
------------------------------------------------------------------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------------------------------------------------------------------
*/

/*
strlen
#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

int	main(void)
{
	char str[] = "cadenade9";
	int result = ft_strlen(str);
	printf("%d.\n", result);
	return (0);
}

------------------------------------------------------------------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------------------------------------------------------------------
*/

/*
memset
#include <stdio.h>
#include <string.h>

void	*ft_memset(void	*b, int c, size_t	len)
{
	unsigned char	*str;

	str = (unsigned char *) b;
	while (len > 0)
	{
		*str = c;
		str++;
		len--;
	}
	return (b);
}

int main (void)
{
    unsigned char	str[30] ;

    ft_memset(str,'$', 5);
    memset(str,'$',5);
  
    printf("%s\n", str);
    return(0);
}
------------------------------------------------------------------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------------------------------------------------------------------
*/

/*
bzero
#include <stdio.h>
#include <string.h>

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*b;

	i = 0;
	b = s;
	while (i < n)
	{
		b[i] = '\0';
		i++;
	}
}


int main (void)
{
    unsigned char	str[30] = "asdgqwer";

    ft_bzero(str, 5);
    bzero(str, 5);
  
    printf("%s\n", str);
    return(0);
}

------------------------------------------------------------------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------------------------------------------------------------------
*/

/*
memcpy
#include <stdio.h>
#include <string.h>
#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	char		*dest;
	char		*spr;

	i = 0;
	dest = (char *)dst;
	spr = (char *)src;
	if (!dst && !src)
		return (NULL);
	while (i < n)
	{
		dest[i] = spr[i];
		i++;
	}
	return (dst);
}


int main (void)
{
    const char src[50] = "Esta es la cadena copiada";
    char dest[10];
	const char src_test[50] = "Esta es la cadena copiada";
    char dest_test[10];
	int n = 4;
   
	printf("Antes de aplicar memcpy = %s\n", dest);
	ft_memcpy(dest, src, n);
	memcpy(dest_test, src_test, n);
	printf("Despues de aplicar ft_memcpy = %s\n", dest);
	printf("Despues de aplicar memcpy = %s\n", dest_test);

return(0);
}

------------------------------------------------------------------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------------------------------------------------------------------
*/

/*
memmove
#include <stdio.h>
#include <string.h>
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	char		*dest;
	char		*spr;

	i = 0;
	dest = (char *)dst;
	spr = (char *)src;
	while (i < n)
	{
		dest[i] = spr[i];
		i++;
	}
	return (dst);
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*dest;
	unsigned char	*str;

	dest = (unsigned char *)dst;
	str = (unsigned char *)src;
	if (dst == NULL && src == NULL)
		return (NULL);
	if (src > dst)
		ft_memcpy(dst, src, len);
	else
	{
		i = len;
		while (i)
		{
			dest[i - 1] = str[i - 1];
			i--;
		}
	}
	return (dst);
}


int main (void)
{
    const char src[50] = "Esta es la cadena movida";
    char dest[50];
	const char src_test[50] = "Esta es la cadena movida";
    char dest_test[50];
	int n = 46;
   
	printf("Antes de aplicar memmove = %s\n", dest);
	ft_memmove(dest, src, n);
	memmove(dest_test, src_test, n);
	printf("Despues de aplicar ft_memmove = %s\n", dest);
	printf("Despues de aplicar memmove = %s\n", dest_test);

return(0);
}
------------------------------------------------------------------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------------------------------------------------------------------
*/

/*
strlcpy
#include <stdio.h>
#include <string.h>
#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	src_len;
	char	*org;

	org = (char *) src;
	i = 0;
	src_len = ft_strlen(src);
	if (size != 0)
	{
		while (i < (size - 1) && org[i] != '\0')
		{
			dst[i] = org[i];
			i++;
		}
			dst[i] = '\0';
	}
	return (src_len);
}


int main (void)
{
char s1[50] = "dest_12_char";
char s2[50] = "org_11_char";
char test_s1[50] = "dest_12_char";
char test_s2[50] = "org_11_char";
int len = 7;

printf("%s\n", s1);
printf("%s\n", test_s1);
printf("\n");
printf("%lu\n", ft_strlcpy(s1, s2, len));
printf("%lu\n", strlcpy(test_s1, test_s2, len));
printf("\n");
printf("%s\n", s1);
printf("%s\n", test_s1);

return(0);
}
------------------------------------------------------------------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------------------------------------------------------------------
*/

/*
strlcat
#include <stdio.h>
#include <string.h>
#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dst_len;
	size_t	src_len;

	i = 0;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	j = dst_len;
	if (dst_len > size)
		return (src_len + size);
	else if (dst_len < size)
	{
		while (j < size - 1 && src[i] != '\0')
		{
			dst[j] = src[i];
			i++;
			j++;
		}
		dst[j] = '\0';
	}
	return (src_len + dst_len);
}

int main (void)
{
char s1[50] = "dest 12 char";
char s2[50] = "org 11 char";
char test_s1[50] = "dest 12 char";
char test_s2[50] = "org 11 char";
int len = 17;

printf("%s\n", s1);
printf("%s\n", test_s1);
printf("\n");
printf("%lu\n", ft_strlcpy(s1, s2, len));
printf("%lu\n", strlcpy(test_s1, test_s2, len));
printf("\n");
printf("%s\n", s1);
printf("%s\n", test_s1);

return(0);
}

------------------------------------------------------------------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------------------------------------------------------------------
*/

/*
toupper
int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c = c - 32;
	return (c);
}

#include <stdio.h>

int main(void)
{
		char c, result;

     c = 'M';
 	result = ft_toupper(c);
     printf("The result is %c\n", result);

     c = 'g';
 	result = ft_toupper(c);
     printf("The result is %c\n", result);

     c = '+';
 	result = ft_toupper(c);
     printf("The result is %c\n", result);

 	return 0;
}

------------------------------------------------------------------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------------------------------------------------------------------
*/

/*
tolower
int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c = c + 32;
	return (c);
}

#include <stdio.h>

int main(void)
{
	char c, result;

    c = 'M';
	result = ft_tolower(c);
    printf("%c\n", result);

    c = 'g';
	result = ft_tolower(c);
    printf("%c\n", result);

    c = '+';
	result = ft_tolower(c);
    printf("%c\n", result);

	return 0;
}

------------------------------------------------------------------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------------------------------------------------------------------
*/

/*
strchr
#include <stdio.h>
#include <string.h>
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*ch;
	char	cast;

	cast = (char) c;
	ch = (char *)s;
	i = 0;
	while (s[i] != cast && s[i] != '\0')
		i++;
	if (s[i] == cast)
		return (&(ch[i]));
	return (NULL);
}


int main (void)
{
char s1[50] = "cadena_prueba";
char test_s1[50] = "cadena_prueba";
char c = 'p';


printf("%s\n", s1);
printf("%s\n", test_s1);
printf("\n");
printf("%s\n", ft_strchr(s1, c));
printf("%s\n", strchr(test_s1, c));

return(0);
}

------------------------------------------------------------------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------------------------------------------------------------------
*/

/*
strrchr
#include <stdio.h>
#include <string.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	int		result;
	char	*ch;
	char	cast;

	cast = (char) c;
	ch = (char *)s;
	i = 0;
	result = 0;
	while (s[i] != '\0')
	{
		if (s[i] == cast)
			result = i + 1;
		i++;
	}
	if (result)
		return (&(ch[result - 1]));
	else if (s[i] == cast)
		return (&(ch[i]));
	return (NULL);
}



int main (void)
{
char s1[50] = "cadena_prueba";
char test_s1[50] = "cadena_prueba";
char c = 'e';

printf("%s\n", s1);
printf("%s\n", test_s1);
printf("\n");
printf("%s\n", ft_strrchr(s1, c));
printf("%s\n", strrchr(test_s1, c));
printf("\n");
printf("%s\n", ft_strrchr(s1, c + 256));
printf("%s\n", strrchr(test_s1, c + 256));

return(0);
}


------------------------------------------------------------------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------------------------------------------------------------------
*/

/*
strncmp
#include <stdio.h>
#include <string.h>
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && i < n)
		i++;
	if (i != n)
		return (str1[i] - str2[i]);
	return (0);
}


int main (void)
{
char s1[50] = "1234569";
char s2[50] = "1234560";
int n = 7;


printf("\n");
printf("%d\n", ft_strncmp(s1, s2, n));
printf("%d\n", strncmp(s1, s2, n));

return(0);
}

------------------------------------------------------------------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------------------------------------------------------------------
*/

/*
memchr
#include <stdio.h>
#include <string.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*src;
	unsigned char	cons;

	cons = (unsigned char) c;
	src = (unsigned char *) s;
	while (n--)
	{
		if (*src == cons)
			return (src);
		else
		src++;
	}
	return (NULL);
}


int main (void)
{
    const char str[] = "cadena de prueba";
    const char ch = 'e';
    int n = 8;
    char *result_test;
    char *result;

    result = ft_memchr(str, ch, n);
    result_test = memchr(str, ch, n);
    
    printf("\n");
    printf("%s\n", result);
    printf("%s\n", result_test);
    printf("\n");
    
    return(0);
}

------------------------------------------------------------------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------------------------------------------------------------------
*/

/*
memcmp
#include <stdio.h>
#include <string.h>
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*str1;
	const unsigned char	*str2;

	str1 = (const unsigned char *)s1;
	str2 = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
	i++;
	}
	return (0);
}


int main (void)
{
	char str1[50] = "123a";
	char str2[50] = "123b";
	int n = 2;
  
	printf("\n");
	printf("%d\n", ft_memcmp(str1, str2, n));
	printf("%d\n", memcmp(str1, str2, n));
	printf("\n");
    
	return(0);
}

------------------------------------------------------------------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------------------------------------------------------------------
*/

/*
strnstr

#include <stdio.h>
#include <string.h>
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*pajal;

	pajal = (char *) haystack;
	i = 0;
	if (*needle == '\0')
		return (pajal);
	while (haystack[i] != '\0' && i < len)
	{
		j = 0;
		while (needle[j] == haystack[i + j] && (i + j) < len)
		{
			if (needle[j + 1] == '\0')
				return (&pajal[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}


int main (void)
{
	char str1[50] = "Hola mundo cruel";
	char str2[50] = "mundo";
	int n = 10;
  
	printf("\n");
	printf("%s\n", ft_strnstr(str1, str2, n));
	printf("%s\n", strnstr(str1, str2, n));
	printf("\n");
    
	return(0);
}

------------------------------------------------------------------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------------------------------------------------------------------
*/

/*
atoi

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	flag;
	int	result;

	i = 0;
	flag = 1;
	result = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			flag = flag * -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (str[i] - 48) + (result * 10);
		i++;
	}
	result = result * flag;
	return (result);
}

int	main(void)
{
	char	str[] = "    +4564-12389789";
	int		rest = ft_atoi(str);
	printf ("%d ", rest);
	printf ("\n");
	int		rest_test = atoi(str);
	printf ("%d ", rest_test);
	printf ("\n");
	return (0);
}

------------------------------------------------------------------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------------------------------------------------------------------
*/

/*
calloc (malloc)

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*b;

	i = 0;
	b = s;
	while (i < n)
	{
		b[i] = '\0';
		i++;
	}
}

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

ptr = (char *)malloc(count * size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}


int	main(void)
{
	void	*ptrc;
	void	*ptrm;
	int		i;

	ptrc = calloc(3, 4);
	ptrm = malloc(12);
	i = 0;
	while (i < 12)
	{
		printf("%c__", ((char *)ptrm)[i] + 48);
		printf("%c\n", ((char *)ptrc)[i] + 48);
		i++;
	}
}

------------------------------------------------------------------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------------------------------------------------------------------
*/

/*

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(const char *s1)
{
	size_t	len;
	size_t	i;
	char	*ptr;

	len = ft_strlen(s1);
	ptr = (char *)malloc((len + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		ptr[i] = s1[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

int	main(void)
{
	char	string[] = "cadena a copiar";

	printf("%s\n", strdup(string));
	printf("%s\n", ft_strdup(string));
}

------------------------------------------------------------------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------------------------------------------------------------------
*/

/*
ft_substr

------------------------------------------------------------------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------------------------------------------------------------------
*/

/*
ft_strjoin
int	ft_str_length(char *str)
{
	int	index;

	index = 0;
	while (str[index])
		index++;
	return (index);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	index;

	index = 0;
	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}

int	ft_compute_final_length(char **strings, int size, int sep_length)
{
	int	final_length;
	int	index;

	final_length = 0;
	index = 0;
	while (index < size)
	{
		final_length += ft_str_length(strings[index]);
		final_length += sep_length;
		index++;
	}
	final_length -= sep_length;
	return (final_length);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		full_length;
	int		index;
	char	*string;
	char	*d;

	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	full_length = ft_compute_final_length(strs, size, ft_str_length(sep));
	d = (string = (char *)malloc((full_length + 1) * sizeof(char)));
	if (!d)
		return (0);
	index = 0;
	while (index < size)
	{
		ft_strcpy(d, strs[index]);
		d += ft_str_length(strs[index]);
		if (index < size - 1)
		{
			ft_strcpy(d, sep);
			d += ft_str_length(sep);
		}
		index++;
	}
	*d = '\0';
	return (string);
}
------------------------------------------------------------------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------------------------------------------------------------------
*/

/*
ft_strtrim

------------------------------------------------------------------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------------------------------------------------------------------
*/

/*
ft_split
int	check_separator(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	count_strings(char *str, char *charset)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && check_separator(str[i], charset))
			i++;
		if (str[i] != '\0')
			count++;
		while (str[i] != '\0' && !check_separator(str[i], charset))
			i++;
	}
	return (count);
}

int	ft_strlen_sep(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] && !check_separator(str[i], charset))
		i++;
	return (i);
}

char	*ft_word(char *str, char *charset)
{
	int		len_word;
	int		i;
	char	*word;

	i = 0;
	len_word = ft_strlen_sep(str, charset);
	word = (char *)malloc(sizeof(char) * (len_word + 1));
	while (i < len_word)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	char	**strings;
	int		i;

	i = 0;
	strings = (char **)malloc(sizeof(char *)
			* (count_strings(str, charset) + 1));
	while (*str != '\0')
	{
		while (*str != '\0' && check_separator(*str, charset))
			str++;
		if (*str != '\0')
		{
			strings[i] = ft_word(str, charset);
			i++;
		}
		while (*str && !check_separator(*str, charset))
			str++;
	}
	strings[i] = 0;
	return (strings);
}
------------------------------------------------------------------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------------------------------------------------------------------
*/

/*
ft_itoa
int	len(long nb)
{
	int	len = 0;
	if (nb < 0)
	{
		nb *= -1;
		len++;
	}
	while (nb > 0)
	{
		nb /= 10;
		len++;
	}
	return(len);
}
char	*ft_itoa(int nb)
{
	char	*str;
	long	n;
	int	i;

	n = nb;
	i = len(n);
	if(!(str = (char *)malloc(i + 1)))
		return(0);
	str[i--] = '\0';
	if (n == 0)
	{
		str[0] = 48;
		return(str);
	}
	if(n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	while (n > 0)
	{
		str[i] = 48 + (n % 10);
		n /= 10;
		i--;
	}
	return (str);
}
------------------------------------------------------------------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------------------------------------------------------------------
*/

/*
ft_strmapi

------------------------------------------------------------------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------------------------------------------------------------------
*/

/*
ft_striteri

------------------------------------------------------------------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------------------------------------------------------------------
*/

/*
ft_putchar_fd
void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write (1, &str[i], 1);
		i++;
	}	
}
------------------------------------------------------------------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------------------------------------------------------------------
*/

/*
ft_putstr_fd

------------------------------------------------------------------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------------------------------------------------------------------
*/

/*
ft_putendl_fd

------------------------------------------------------------------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------------------------------------------------------------------
*/

/*
ft_putnbr_fd
void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
		ft_putnbr(nb);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		 ft_putchar(nb + 48);
}
------------------------------------------------------------------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------------------------------------------------------------------
*/












