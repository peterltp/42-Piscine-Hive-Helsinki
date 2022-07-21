/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ple- <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 00:30:44 by ple-              #+#    #+#             */
/*   Updated: 2022/07/13 00:58:27 by ple-             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

struct sPerson {
	int age;

};

struct sPerson *getNewPerson(const int age) 
{
    struct sPerson *newPerson = NULL;
    newPerson = malloc(sizeof(struct sPerson));
	// always check the malloc
	// if (newPerson != NULL)
	// then do the same code
	// else print out error
	newPerson->age = age;
    printf("created new person at %p\n", newPerson);
    return newPerson;
}

void printPerson(const struct sPerson *person, const char *comment)
{
    if (person == NULL)
    {
        printf("%s is NULL\n", comment);
    }
    else
    {
       printf("%s: age:%d address:%p\n", 
            comment,
            person->age, 
            person);
    }
    
}

int main() 
{
	printf("\n\n** START **\n\n");

    
    struct sPerson *first = NULL;
    struct sPerson *second = NULL;

    printPerson(first, "first");
    printPerson(second, "second");
    
    first = getNewPerson(125);
    second = getNewPerson(100);
    
    printPerson(first, "first");
    printPerson(second, "second");

    free(first);
    free(second);    
    
    first = NULL;
    second = NULL;

	return 0;
}
