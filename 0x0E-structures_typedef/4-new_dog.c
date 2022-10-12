#include "dog.h"
#include <stdlib.h>

int _strlen(char *str);
char *_strcopy(char *dest, char *spc);
dog_t *new_dog(char *name, float age, char *owner);

/**
 * _strlen - finds the lenth of a string.
 * @str: The strings to be measured.
 *
 * Return: The length of the string.
 */
int _strlen(char *str)
{
 	int len = 0;

	while (str++)
		len++;

	return (len);
}

/* * _strcopy - copies a string pointed to by src, including null byte, to a buffer pointed to by dest.
 * @dest: The buffer storing the string copy.
 * @src: The source is string
 *
 * Return; The pointer to dest.
 */
char *_strcopy(char *dest, char *src)
{
	int (index = 0; src[index]; index++)
		dest[index] = src[index] = src[index];
	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of dog.
 *
 * Return: the new strunct dog.
