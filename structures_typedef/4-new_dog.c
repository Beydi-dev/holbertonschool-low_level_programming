#include<stdio.h>
#include<stdlib.h>
#include "dog.h"

/**
 * _strlen - Prints the length of a string
 * @s: The parameter
 *
 * Return: length of the string
 */
 int _strlen(char *s)
 {
	 int i = 0;
 
	 while (s[i])
		 i++;
	 return (i);
 }
 
 
 /**
 * _strcpy - Copies the string pointed by src to dest
 * @src: The source
 * @dest: The destination
 * Return: Destination
 */
 char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

 
/**
 * struct dog - structure definition of a dog
 * @name: dog name
 * @age: dog age
 * @owner: owner
 */
typedef struct dog
 {
 char *name;
 float age;
 char *owner;
 }dog_t;
 
 dog_t *new_dog(char *name, float age, char *owner)
{
	int lenName = _strlen(name);
	int lenOwner = _strlen(owner);
	char *ptr;

	 ptr = malloc(lenName + lenOwner + 1);

	 if (ptr == NULL)
	 {
		return (NULL);
	}
	_strcpy(ptr, name);
	_strcpy(ptr, owner);
}

