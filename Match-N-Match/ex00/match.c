/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ple- <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 23:29:53 by ple-              #+#    #+#             */
/*   Updated: 2022/07/11 14:42:23 by ple-             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int	match(char *s1, char *s2)
{
	if (*s1 != '\0' && *s2 == '*')
		return (match(s1, s2 + 1) || match(s1 + 1, s2));
	if (*s1 == '\0' && *s2 == '*')
		return (match(s1, s2 + 1));
	if (*s1 == *s2 && *s1 != '\0' && *s2 != '\0')
		return (match(s1 + 1, s2 + 1));
	if (*s1 == *s2 && *s1 == '\0' && *s2 == '\0')
		return (1);
	return (0);
}

int	main()
{
	char s1[] ="abds";
	char s2[] ="abs*";
	char s3[] ="peterphucle";
	char s4[] ="peter*hucle";

	printf("%d\n", match(s3,s4));
	return (0);

}
