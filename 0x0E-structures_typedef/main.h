#define MAIN_H
#ifdef MAIN_H

/**
  * struct dog - Dog attributes
  * @name: dog name.
  * @age: dog age.
  * @owner: owner of the dog.
  *
  * Description: attributes of a dog.
  */

void free_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);
void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
