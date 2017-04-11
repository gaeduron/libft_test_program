/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   part1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gduron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 09:49:32 by gduron            #+#    #+#             */
/*   Updated: 2017/04/11 16:08:22 by gduron           ###   ########.fr       */
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


	printf("\n\033[33m________is* group________\033[00m\n");

	printf("\n\033[36m____ft_isalpha____\033[00m\n");

	printf("\n\033[36m____ft_isdigit____\033[00m\n");

	printf("\n\033[36m____ft_isprint____\033[00m\n");


	printf("\n\033[33m________to* group________\033[00m\n");

	printf("\n\033[36m____ft_tolower____\033[00m\n");

	printf("\n\033[36m____ft_toupper____\033[00m\n");


	printf("\n\033[33m________mem* group________\033[00m\n");

}
