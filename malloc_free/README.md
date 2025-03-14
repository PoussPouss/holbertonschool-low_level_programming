# malloc_free

Ce dossier contient des exercices sur l'allocation dynamique de mémoire en C, utilisant les fonctions `malloc` et `free`.

## Description

L'allocation dynamique de mémoire est une compétence essentielle en C qui permet d'allouer de la mémoire pendant l'exécution du programme plutôt qu'à la compilation. Ce dossier contient plusieurs exercices qui démontrent l'utilisation de ces concepts.

## Fichiers et fonctions

### 0-create_array.c
- **Prototype**: `char *create_array(unsigned int size, char c);`
- **Description**: Crée un tableau de caractères et l'initialise avec un caractère spécifique.
- **Paramètres**: 
  - `size`: Taille du tableau
  - `c`: Caractère d'initialisation
- **Retour**: Pointeur vers le tableau, ou NULL si la taille est 0 ou si l'allocation échoue.

### 1-strdup.c
- **Prototype**: `char *_strdup(char *str);`
- **Description**: Retourne un pointeur vers une nouvelle chaîne de caractères qui est un duplicata de la chaîne `str`.
- **Paramètres**: 
  - `str`: Chaîne à dupliquer
- **Retour**: Pointeur vers la chaîne dupliquée, ou NULL si `str` est NULL ou si l'allocation échoue.

### 2-str_concat.c
- **Prototype**: `char *str_concat(char *s1, char *s2);`
- **Description**: Concatène deux chaînes de caractères.
- **Paramètres**: 
  - `s1`: Première chaîne
  - `s2`: Deuxième chaîne
- **Retour**: Pointeur vers la nouvelle chaîne concaténée, ou NULL si l'allocation échoue.

### 3-alloc_grid.c
- **Prototype**: `int **alloc_grid(int width, int height);`
- **Description**: Retourne un pointeur vers un tableau 2D d'entiers.
- **Paramètres**: 
  - `width`: Largeur du tableau
  - `height`: Hauteur du tableau
- **Retour**: Pointeur vers le tableau 2D, ou NULL si `width` ou `height` est <= 0 ou si l'allocation échoue.

### 4-free_grid.c
- **Prototype**: `void free_grid(int **grid, int height);`
- **Description**: Libère la mémoire allouée par `alloc_grid`.
- **Paramètres**: 
  - `grid`: Grille à libérer
  - `height`: Hauteur de la grille

### 100-argstostr.c (Avancé)
- **Prototype**: `char *argstostr(int ac, char **av);`
- **Description**: Concatène tous les arguments du programme.
- **Paramètres**: 
  - `ac`: Nombre d'arguments
  - `av`: Tableau d'arguments
- **Retour**: Pointeur vers la nouvelle chaîne, ou NULL si `ac` == 0, `av` == NULL, ou si l'allocation échoue.

### 101-strtow.c (Avancé)
- **Prototype**: `char **strtow(char *str);`
- **Description**: Divise une chaîne en mots.
- **Paramètres**: 
  - `str`: Chaîne à diviser
- **Retour**: Tableau de chaînes (mots), ou NULL si `str` == NULL, `str` == "", ou si l'allocation échoue.

## Compilation

Les programmes peuvent être compilés avec GCC en utilisant les options suivantes:

```bash
gcc -Wall -Werror -Wextra -pedantic *.c -o executable_name