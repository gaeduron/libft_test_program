/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   part1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gduron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 09:49:32 by gduron            #+#    #+#             */
/*   Updated: 2017/04/12 12:17:57 by gduron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

void	part1()
{
	printf("\033[32m______________________ PART 1 ______________________\033[00m\n");

	printf("\n\033[33m________str* group________\033[00m\n");

	printf("\n\033[36m____ft_strlen____\033[00m\n");
	printf("   strlen = %lu\n", strlen("123456789012345678901234567890123456789012"));
	printf("ft_strlen = %lu\n", ft_strlen("123456789012345678901234567890123456789012"));
	printf("   strlen = %lu\n", strlen("1"));
	printf("ft_strlen = %lu\n", ft_strlen("1"));
	printf("   strlen = %lu\n", strlen(""));
	printf("ft_strlen = %lu\n", ft_strlen(""));
//	printf("strlen = %lu\n", strlen(0));
//	printf("ft_strlen = %lu\n", ft_strlen(0));

	printf("\n\033[36m____ft_strcmp____\033[00m\n");
	printf("   strcmp = %d\n", strcmp("42", "42"));
	printf("ft_strcmp = %d\n", ft_strcmp("42", "42"));
	printf("   strcmp = %d\n", strcmp("21", "42"));
	printf("ft_strcmp = %d\n", ft_strcmp("21", "42"));
	printf("   strcmp = %d\n", strcmp("42", "41"));
	printf("ft_strcmp = %d\n", ft_strcmp("42", "41"));
	printf("   strcmp = %d\n", strcmp("", ""));
	printf("ft_strcmp = %d\n", ft_strcmp("", ""));
//	printf("   strcmp = %d\n", strcmp(0, 0));
//	printf("ft_strcmp = %d\n", ft_strcmp(0, 0));

	printf("\n\033[36m____ft_strncmp____\033[00m\n");
	printf("   strncmp = %d\n", strncmp("42", "42", 2));
	printf("ft_strncmp = %d\n", ft_strncmp("42", "42", 2));
	printf("   strncmp = %d\n", strncmp("42", "42", 3));
	printf("ft_strncmp = %d\n", ft_strncmp("42", "42", 3));
	printf("   strncmp = %d\n", strncmp("42", "42", 4));
	printf("ft_strncmp = %d\n", ft_strncmp("42", "42", 4));
	printf("   strncmp = %d\n", strncmp("42", "42", 1));
	printf("ft_strncmp = %d\n", ft_strncmp("42", "42", 1));
	printf("   strncmp = %d\n", strncmp("42", "42", 0));
	printf("ft_strncmp = %d\n", ft_strncmp("42", "42", 0));
	printf("   strncmp = %d\n", strncmp("21", "42", 2));
	printf("ft_strncmp = %d\n", ft_strncmp("21", "42", 2));
	printf("   strncmp = %d\n", strncmp("42", "41", 2));
	printf("ft_strncmp = %d\n", ft_strncmp("42", "41", 2));
	printf("   strncmp = %d\n", strncmp("42", "41", 1));
	printf("ft_strncmp = %d\n", ft_strncmp("42", "41", 1));
	printf("   strncmp = %d\n", strncmp("", "", 2));
	printf("ft_strncmp = %d\n", ft_strncmp("", "", 2));
	printf("   strncmp = %d\n", strncmp("", "", 1));
	printf("ft_strncmp = %d\n", ft_strncmp("", "", 1));
	printf("   strncmp = %d\n", strncmp("1234", "123", 4));
	printf("ft_strncmp = %d\n", ft_strncmp("1234", "123", 4));
	printf("   strncmp = %d\n", strncmp("1234", "1214", 3));
	printf("ft_strncmp = %d\n", ft_strncmp("1234", "1214", 3));
	printf("   strncmp = %d\n", strncmp("1234", "1214", 2));
	printf("ft_strncmp = %d\n", ft_strncmp("1234", "1214", 2));
//	printf("   strncmp = %d\n", strncmp(0, 0, 2));
//	printf("ft_strncmp = %d\n", ft_strncmp(0, 0, 2));

	printf("\n\033[36m____ft_strdup____\033[00m\n");
	printf("   strdup = %s\n", strdup("42"));
	printf("ft_strdup = %s\n", ft_strdup("42"));
	printf("   strdup = %s\n", strdup("qwertyuiop1234567890ABC*~!@#$%^&"));
	printf("ft_strdup = %s\n", ft_strdup("qwertyuiop1234567890ABC*~!@#$%^&"));
	printf("   strdup = %s\n", strdup(""));
	printf("ft_strdup = %s\n", ft_strdup(""));
//	printf("   strdup = %s\n", strdup(0));
//	printf("ft_strdup = %s\n", ft_strdup(0));

	printf("\n\033[36m____ft_strstr____\033[00m\n");
	printf("   strstr = %s\n", strstr("", ""));
	printf("ft_strstr = %s\n", ft_strstr("", ""));
	printf("   strstr = %s\n", strstr("1 2 3", "2"));
	printf("ft_strstr = %s\n", ft_strstr("1 2 3", "2"));
	printf("   strstr = %s\n", strstr("1234", "5"));
	printf("ft_strstr = %s\n", ft_strstr("1234", "5"));
	printf("   strstr = %s\n", strstr("1", "1"));
	printf("ft_strstr = %s\n", ft_strstr("1", "1"));
//	printf("   strstr = %s\n", strstr(0, 0));
//	printf("ft_strstr = %s\n", ft_strstr(0, 0));

	printf("\n\033[36m____ft_strnstr____\033[00m\n");
	printf("   strnstr = %s\n", strnstr("", "", 3));
	printf("ft_strnstr = %s\n", ft_strnstr("", "", 3));
	printf("   strnstr = %s\n", strnstr("1 2 3", "2", 10));
	printf("ft_strnstr = %s\n", ft_strnstr("1 2 3", "2", 10));
	printf("   strnstr = %s\n", strnstr("1 2 3", "2", 1));
	printf("ft_strnstr = %s\n", ft_strnstr("1 2 3", "2", 1));
	printf("   strnstr = %s\n", strnstr("1 2 3", "2", 0));
	printf("ft_strnstr = %s\n", ft_strnstr("1 2 3", "2", 0));
	printf("   strnstr = %s\n", strnstr("1 2 3", "", 10));
	printf("ft_strnstr = %s\n", ft_strnstr("1 2 3", "", 10));
	printf("   strnstr = %s\n", strnstr("1 2 3", "", 0));
	printf("ft_strnstr = %s\n", ft_strnstr("1 2 3", "", 0));

	printf("\n\033[36m____ft_strcat____\033[00m\n");
	char cat1[10] = {0};
	char ft_cat1[10] = {0};
	printf("   strcat = %s\n", strcat(cat1, "42"));
	printf("ft_strcat = %s\n", ft_strcat(ft_cat1, "42"));
	char cat2[10] = "___";
	char ft_cat2[10] = "___";
	printf("   strcat = %s\n", strcat(cat2, "42"));
	printf("ft_strcat = %s\n", ft_strcat(ft_cat2, "42"));
	char cat3[4] = "\0\11\0";
	char ft_cat3[4] = "\0\11\0";
	cat3[0] = -110;
	ft_cat3[0] = -110;
	printf("   strcat = %s\n", strcat(ft_cat3, ""));
	printf("ft_strcat = %s\n", ft_strcat(cat3, ""));
/*	case with no \0 at the end
 *	char cat5[4] = "\0lol";
	char ft_cat5[4] = "\0lol";
	cat5[0] = -110;
	ft_cat5[0] = -110;
	printf("   strcat = %s\n", strcat(ft_cat5, ""));
	printf("ft_strcat = %s\n", ft_strcat(cat5, ""));*/
//	char cat4[10];
//	char ft_cat4[10];
//	printf("   strcat = %s\n", strcat(cat4, "1234567890123"));
//	printf("ft_strcat = %s\n", strcat(ft_cat4, "1234567890123"));

	printf("\n\033[36m____ft_strncat____\033[00m\n");
	char ncat1[10] = {0};
	char ft_ncat1[10] = {0};
	printf("   strncat = %s\n", strncat(ncat1, "424242", 2));
	printf("ft_strncat = %s\n", ft_strncat(ft_ncat1, "424242", 2));
	char ncat2[7] = {0};
	char ft_ncat2[7] = {0};
	printf("   strncat = %s\n", strncat(ncat2, "424242", 6));
	printf("ft_strncat = %s\n", ft_strncat(ft_ncat2, "424242", 6));
	char ncat3[10] = "\0\11\0";
	char ft_ncat3[10] = "\0\11\0";
	ncat3[0] = -110;
	ft_ncat3[0] = -110;
	printf("   strncat = %s\n", strncat(ft_ncat3, "42", 3));
	printf("ft_strncat = %s\n", ft_strncat(ncat3, "42", 3));
	char ncat4[7] = {0};
	char ft_ncat4[7] = {0};
	printf("   strncat = %s\n", strncat(ncat4, "424242", 0));
	printf("ft_strncat = %s\n", ft_strncat(ft_ncat4, "424242", 0));

	printf("\n\033[36m____ft_strncat____\033[00m\n");
	char lcat1[10] = {0};
	char ft_lcat1[10] = {0};
	printf("   strlcat = %lu\n", strlcat(lcat1, "424242", 3));
	printf("ft_strlcat = %lu\n", ft_strlcat(ft_lcat1, "424242", 3));
	printf("   str     = %s\n", lcat1);
	printf("ft_str     = %s\n", ft_lcat1);
	char lcat2[10] = "abc";
	char ft_lcat2[10] = "abc";
	printf("   strlcat = %lu\n", strlcat(lcat2, "def", 7));
	printf("ft_strlcat = %lu\n", ft_strlcat(ft_lcat2, "def", 7));
	printf("   str     = %s\n", lcat2);
	printf("ft_str     = %s\n", ft_lcat2);
	char lcat3[10] = "abc";
	char ft_lcat3[10] = "abc";
	printf("   strlcat = %lu\n", strlcat(lcat3, "def", 1));
	printf("ft_strlcat = %lu\n", ft_strlcat(ft_lcat3, "def", 1));
	printf("   str     = %s\n", lcat3);
	printf("ft_str     = %s\n", ft_lcat3);
	char lcat4[10] = "abc";
	char ft_lcat4[10] = "abc";
	printf("   strlcat = %lu\n", strlcat(lcat4, "def", 4));
	printf("ft_strlcat = %lu\n", ft_strlcat(ft_lcat4, "def", 4));
	printf("   str     = %s\n", lcat4);
	printf("ft_str     = %s\n", ft_lcat4);
	char lcat5[10] = "abc";
	char ft_lcat5[10] = "abc";
	printf("   strlcat = %lu\n", strlcat(lcat5, "defijkl", 10));
	printf("ft_strlcat = %lu\n", ft_strlcat(ft_lcat5, "defijkl", 10));
	printf("   str     = %s\n", lcat5);
	printf("ft_str     = %s\n", ft_lcat5);

	printf("\n\033[36m____ft_strcpy____\033[00m\n");
	char cpy1[10] = {0};
	char ft_cpy1[10] = {0};
	printf("   strcpy = %s\n", strcpy(cpy1, "424242"));
	printf("ft_strcpy = %s\n", ft_strcpy(ft_cpy1, "424242"));
	char cpy2[10] = {0};
	char ft_cpy2[10] = {0};
	printf("   strcpy = %s\n", strcpy(cpy2, ""));
	printf("ft_strcpy = %s\n", ft_strcpy(ft_cpy2, ""));
	char cpy3[10] = "123";
	char ft_cpy3[10] = "123";
	printf("   strcpy = %s\n", strcpy(cpy3, "456"));
	printf("ft_strcpy = %s\n", ft_strcpy(ft_cpy3, "456"));

	printf("\n\033[36m____ft_strncpy____\033[00m\n");
	char ncpy1[10] = {0};
	char ft_ncpy1[10] = {0};
	printf("   strncpy = %s\n", strncpy(ncpy1, "424242", 2));
	printf("ft_strncpy = %s\n", ft_strncpy(ft_ncpy1, "424242", 2));
	char ncpy2[10] = {0};
	char ft_ncpy2[10] = {0};
	printf("   strncpy = %s\n", strncpy(ncpy2, "424242", 0));
	printf("ft_strncpy = %s\n", ft_strncpy(ft_ncpy2, "424242", 0));
	char ncpy3[10] = "456";
	char ft_ncpy3[10] = "456";
	printf("   strncpy = %s\n", strncpy(ncpy3, "123", 10));
	printf("ft_strncpy = %s\n", ft_strncpy(ft_ncpy3, "123", 10));

	printf("\n\033[36m____ft_strchr____\033[00m\n");
	printf("   strchr = %s\n", strchr("42", '4'));
	printf("ft_strchr = %s\n", ft_strchr("42", '4'));
	printf("   strchr = %s\n", strchr("42", 0));
	printf("ft_strchr = %s\n", ft_strchr("42", 0));
	printf("   strchr = %s\n", strchr("123123", '1'));
	printf("ft_strchr = %s\n", ft_strchr("123123", '1'));
	printf("   strchr = %s\n", strchr("0987654321", '1'));
	printf("ft_strchr = %s\n", ft_strchr("0987654321", '1'));

	printf("\n\033[36m____ft_strrchr____\033[00m\n");
	printf("   strrchr = %s\n", strrchr("42", '4'));
	printf("ft_strrchr = %s\n", ft_strrchr("42", '4'));
	printf("   strrchr = %s\n", strrchr("42", 0));
	printf("ft_strrchr = %s\n", ft_strrchr("42", 0));
	printf("   strrchr = %s\n", strrchr("123123", '1'));
	printf("ft_strrchr = %s\n", ft_strrchr("123123", '1'));
	printf("   strrchr = %s\n", strrchr("10987654321", '1'));
	printf("ft_strrchr = %s\n", ft_strrchr("10987654321", '1'));

	printf("\n\033[33m________is* group________\033[00m\n");

	printf("\n\033[36m____ft_isalpha____\033[00m\n");
	printf("   isalpha = %d\n", isalpha('c'));
	printf("ft_isalpha = %d\n", ft_isalpha('c'));
	printf("   isalpha = %d\n", isalpha('1'));
	printf("ft_isalpha = %d\n", ft_isalpha('1'));
	printf("   isalpha = %d\n", isalpha('\10'));
	printf("ft_isalpha = %d\n", ft_isalpha('\10'));
	printf("   isalpha = %d\n", isalpha('C'));
	printf("ft_isalpha = %d\n", ft_isalpha('C'));
	printf("   isalpha = %d\n", isalpha(1203));
	printf("ft_isalpha = %d\n", ft_isalpha(1203));
	printf("   isalpha = %d\n", isalpha(0));
	printf("ft_isalpha = %d\n", ft_isalpha(0));

	printf("\n\033[36m____ft_isdigit____\033[00m\n");
	printf("   isdigit = %d\n", isdigit('c'));
	printf("ft_isdigit = %d\n", ft_isdigit('c'));
	printf("   isdigit = %d\n", isdigit('1'));
	printf("ft_isdigit = %d\n", ft_isdigit('1'));
	printf("   isdigit = %d\n", isdigit('\10'));
	printf("ft_isdigit = %d\n", ft_isdigit('\10'));
	printf("   isdigit = %d\n", isdigit('C'));
	printf("ft_isdigit = %d\n", ft_isdigit('C'));
	printf("   isdigit = %d\n", isdigit(1203));
	printf("ft_isdigit = %d\n", ft_isdigit(1203));
	printf("   isdigit = %d\n", isdigit(0));
	printf("ft_isdigit = %d\n", ft_isdigit(0));

	printf("\n\033[36m____ft_isprint____\033[00m\n");
	printf("   isprint = %d\n", isprint('c'));
	printf("ft_isprint = %d\n", ft_isprint('c'));
	printf("   isprint = %d\n", isprint('1'));
	printf("ft_isprint = %d\n", ft_isprint('1'));
	printf("   isprint = %d\n", isprint('\10'));
	printf("ft_isprint = %d\n", ft_isprint('\10'));
	printf("   isprint = %d\n", isprint('C'));
	printf("ft_isprint = %d\n", ft_isprint('C'));
	printf("   isprint = %d\n", isprint(1203));
	printf("ft_isprint = %d\n", ft_isprint(1203));
	printf("   isprint = %d\n", isprint(0));
	printf("ft_isprint = %d\n", ft_isprint(0));


	printf("\n\033[36m____ft_isalnum____\033[00m\n");
	printf("   isalnum = %d\n", isalnum('c'));
	printf("ft_isalnum = %d\n", ft_isalnum('c'));
	printf("   isalnum = %d\n", isalnum('1'));
	printf("ft_isalnum = %d\n", ft_isalnum('1'));
	printf("   isalnum = %d\n", isalnum('\10'));
	printf("ft_isalnum = %d\n", ft_isalnum('\10'));
	printf("   isalnum = %d\n", isalnum('C'));
	printf("ft_isalnum = %d\n", ft_isalnum('C'));
	printf("   isalnum = %d\n", isalnum(1203));
	printf("ft_isalnum = %d\n", ft_isalnum(1203));
	printf("   isalnum = %d\n", isalnum(0));
	printf("ft_isalnum = %d\n", ft_isalnum(0));

	printf("\n\033[36m____ft_isascii____\033[00m\n");
	printf("   isascii = %d\n", isascii('c'));
	printf("ft_isascii = %d\n", ft_isascii('c'));
	printf("   isascii = %d\n", isascii('1'));
	printf("ft_isascii = %d\n", ft_isascii('1'));
	printf("   isascii = %d\n", isascii('\10'));
	printf("ft_isascii = %d\n", ft_isascii('\10'));
	printf("   isascii = %d\n", isascii('C'));
	printf("ft_isascii = %d\n", ft_isascii('C'));
	printf("   isascii = %d\n", isascii(1203));
	printf("ft_isascii = %d\n", ft_isascii(1203));
	printf("   isascii = %d\n", isascii(0));
	printf("ft_isascii = %d\n", ft_isascii(0));

	printf("\n\033[33m________to* group________\033[00m\n");

	printf("\n\033[36m____ft_tolower____\033[00m\n");
	printf("   tolower = %d\n", tolower('c'));
	printf("ft_tolower = %d\n", ft_tolower('c'));
	printf("   tolower = %d\n", tolower('1'));
	printf("ft_tolower = %d\n", ft_tolower('1'));
	printf("   tolower = %d\n", tolower('\10'));
	printf("ft_tolower = %d\n", ft_tolower('\10'));
	printf("   tolower = %d\n", tolower('C'));
	printf("ft_tolower = %d\n", ft_tolower('C'));
	printf("   tolower = %d\n", tolower(1203));
	printf("ft_tolower = %d\n", ft_tolower(1203));
	printf("   tolower = %d\n", tolower(0));
	printf("ft_tolower = %d\n", ft_tolower(0));

	printf("\n\033[36m____ft_toupper____\033[00m\n");
	printf("   toupper = %d\n", toupper('c'));
	printf("ft_toupper = %d\n", ft_toupper('c'));
	printf("   toupper = %d\n", toupper('1'));
	printf("ft_toupper = %d\n", ft_toupper('1'));
	printf("   toupper = %d\n", toupper('\10'));
	printf("ft_toupper = %d\n", ft_toupper('\10'));
	printf("   toupper = %d\n", toupper('C'));
	printf("ft_toupper = %d\n", ft_toupper('C'));
	printf("   toupper = %d\n", toupper(1203));
	printf("ft_toupper = %d\n", ft_toupper(1203));
	printf("   toupper = %d\n", toupper(0));
	printf("ft_toupper = %d\n", ft_toupper(0));

	printf("\n\033[33m________mem* group________\033[00m\n");
	
	printf("\n\033[36m____ft_memset____\033[00m\n");
	char set1[11] = "1234567890";
	char ft_set1[11] = "1234567890";
	printf("   memeset = %s\n", memset(set1, '4', 10));
	printf("ft_memeset = %s\n", ft_memset(ft_set1, '4', 10));
	char set2[11] = "1234567890";
	char ft_set2[11] = "1234567890";
	printf("   memeset = %s\n", memset(set2, '4', 3));
	printf("ft_memeset = %s\n", ft_memset(ft_set2, '4', 3));
	char set3[11] = "1234567890";
	char ft_set3[11] = "1234567890";
	printf("   memeset = %s\n", memset(set3, '4', 0));
	printf("ft_memeset = %s\n", ft_memset(ft_set3, '4', 0));

	printf("\n\033[36m____ft_bzero____\033[00m\n");
	void *bz1 = set1;
	void *ft_bz1 = ft_set1;
	bzero(bz1, 10);
	ft_bzero(ft_bz1, 10);
	printf("   bzero = %s\n", set1);
	printf("ft_bzero = %s\n", ft_set1);
	void *bz2 = set2+1;
	void *ft_bz2 = ft_set2+1;
	bzero(bz2, strlen(set2+1));
	ft_bzero(ft_bz2, strlen(ft_set2+1));
	printf("   bzero = %s\n", set2);
	printf("ft_bzero = %s\n", ft_set2);

	printf("\n\033[36m____ft_memcpy____\033[00m\n");
	char mcpy1[11] = {0};
	char ft_mcpy1[11] = {0};
	printf("   memcpy = %s\n", memcpy(mcpy1, "1234567890", 10));
	printf("ft_memcpy = %s\n", ft_memcpy(ft_mcpy1, "1234567890", 10));
	char mcpy2[11] = {0};
	char ft_mcpy2[11] = {0};
	printf("   memcpy = %s\n", memcpy(mcpy2, "1234567890", 1));
	printf("ft_memcpy = %s\n", ft_memcpy(ft_mcpy2, "1234567890", 1));
	char mcpy3[11] = {0};
	char ft_mcpy3[11] = {0};
	printf("   memcpy = %s\n", memcpy(mcpy3, "1234567890", 0));
	printf("ft_memcpy = %s\n", ft_memcpy(ft_mcpy3, "1234567890", 0));
	char mcpy4[11] = "000";
	char ft_mcpy4[11] = "000";
	printf("   memcpy = %s\n", memcpy(mcpy4, "1234567890", 3));
	printf("ft_memcpy = %s\n", ft_memcpy(ft_mcpy4, "1234567890", 3));

	printf("\n\033[36m____ft_memccpy____\033[00m\n");
	char mccpy1[11] = {0};
	char ft_mccpy1[11] = {0};
	printf("   memccpy = %s\n", memccpy(mccpy1, "1234567890", '5', 10));
	printf("ft_memccpy = %s\n", ft_memccpy(ft_mccpy1, "1234567890", '5', 10));
	char mccpy2[11] = {0};
	char ft_mccpy2[11] = {0};
	printf("   memccpy = %s\n", memccpy(mccpy2, "1234567890", '5',1));
	printf("ft_memccpy = %s\n", ft_memccpy(ft_mccpy2, "1234567890", '5',1));
	char mccpy3[11] = {0};
	char ft_mccpy3[11] = {0};
	printf("   memccpy = %s\n", memccpy(mccpy3, "1234567890", 0, 10));
	printf("ft_memccpy = %s\n", ft_memccpy(ft_mccpy3, "1234567890", 0, 10));
	printf("   memccpy = %s\n", mccpy3);
	printf("ft_memccpy = %s\n", mccpy3);
	char mccpy4[11] = "000";
	char ft_mccpy4[11] = "000";
	printf("   memccpy = %s\n", memccpy(mccpy4, "1234567890", '3', 5));
	printf("ft_memccpy = %s\n", ft_memccpy(ft_mccpy4, "1234567890", '3', 5));

	printf("\n\033[36m____ft_memmove____\033[00m\n");

	printf("\n\033[36m____ft_memchr____\033[00m\n");

	printf("\n\033[36m____ft_memcmp____\033[00m\n");

	printf("\n\033[33m________other group________\033[00m\n");
	
	printf("\n\033[36m____ft_atoi____\033[00m\n");
	printf("ATOI: 0 = %d, 10 = %d, -10 = %d, int_max = %d, int_min = %d", atoi("0"), atoi("10"), atoi("-10"), atoi("2147483647"), atoi("-2147483648"));
	printf("\nFT_ATOI: nb1 = %d, nb2 = %d, nb3 = %d, nb4 = %d, nb5 = %d", ft_atoi("0"), ft_atoi("10"), ft_atoi("-10"), ft_atoi("2147483647"), ft_atoi("-2147483648"));
	printf("\nATOI: '   -23' = %d, '  - 10' = %d, '  10 23' = %d, '\n   21' = %d", atoi("   -23"), atoi("  - 10"), atoi("  10 23"), atoi("\n\t\v\f\r 21"));
	printf("\nFT_ATOI: '   -23' = %d, '  - 10' = %d, '  10 23' = %d, '\n    21' = %d", ft_atoi("   -23"), ft_atoi("  - 10"), ft_atoi("  10 23"), ft_atoi("\n\t\v\f\r 21"));
}
