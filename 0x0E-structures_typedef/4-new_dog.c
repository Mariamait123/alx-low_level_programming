#include "dog.h"
#include <stdlib.h>
int _strlen(char *c);
char *_strcpy(char *s2, char *s1);
/**
  *new_dog - creates a new dog
  *@name: name of new dog
  *@age: age of new dog
  *@owner: owner of new dog
  *Return: new dogs pointer
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int l1, l2;

	l1 = _strlen(name);
	l2 = _strlen(owner);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char) * (l1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (l2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;
	return (dog);
}
/**
  *_strlen - returns the length of a string
  *@c: input string
  *Return: number of char
  */
int _strlen(char *c)
{
	int a = 0;

	while (c[a] != '\0')
		a++;
	return (a);
}
/**
  *_strcpy - cpoies char
  *@s2: holds copy
  *@s1: copied string
  *Return: new s2
  */
char *_strcpy(char *s2, char *s1)
{
	int a = 0;

	for (; s1[a] != '\0'; a++)
		s2[a] = s1[a];
	s2[a] = '\0';
	return (s2);
}
