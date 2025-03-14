Ce dépôt contient une série de projets en langage C réalisés dans le cadre de la formation Holberton School. Ces projets couvrent les fondamentaux de la programmation en C, des concepts de base aux structures de données plus complexes.

## Contenu du dépôt

### 1. hello_world
Introduction au langage C et à son environnement de développement.

### 2. variables_if_else_while
Projets concernant les variables, les structures conditionnelles et les boucles en C.

### 3. functions_nested_loops
Exercices sur les fonctions et les boucles imbriquées, incluant :
- Utilisation de `_putchar`
- Création de fonctions pour l'affichage 
- Fonctions mathématiques simples comme `add`
- Manipulation de séquences de nombres

### 4. more_functions_nested_loops
Extensions des concepts précédents avec des exercices plus complexes sur les fonctions et les boucles.

### 5. pointers_arrays_strings
Projets axés sur la manipulation de pointeurs, tableaux et chaînes de caractères en C.

### 6. recursion
Exercices d'implémentation de fonctions récursives.

### 7. argc_argv
Programmes démontrant l'utilisation des arguments de ligne de commande en C :
- `0-whatsmyname.c` : Affiche le nom du programme
- `1-args.c` : Gestion des arguments
- `2-args.c` : Affichage des arguments
- `3-mul.c` : Multiplication de deux nombres
- `4-add.c` : Addition de nombres

### 8. malloc_free
Projets centrés sur l'allocation dynamique de mémoire, incluant :
- Utilisation de `malloc` et `free`
- Implémentation de `_strdup` qui duplique une chaîne de caractères

### 9. more_malloc_free
Exercices avancés sur la gestion de la mémoire dynamique.

### 10. structures_typedef
Projets introduisant les structures de données personnalisées et les définitions de types en C.

## Compétences développées

- Syntaxe et sémantique du langage C
- Manipulation de mémoire (allocation statique et dynamique)
- Algorithmes de base et structures de données
- Gestion des pointeurs et références
- Bonnes pratiques de programmation

## Auteur

Guillaume - Étudiant à Holberton School

## Note

Ce dépôt représente mon parcours d'apprentissage du langage C et des concepts fondamentaux de la programmation de bas niveau.

PoussPouss: fait moi un readme pour tout ce que contient le dossier malloc_free

GitHub Copilot: # malloc_free

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
```

## Auteur

Guillaume - Étudiant à Holberton School

PoussPouss: je veux copier coller le readme et qu'il soit propre

GitHub Copilot: Voici le README.md propre et prêt à copier-coller :

```markdown
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
```

## Auteur

Guillaume - Étudiant à Holberton School


PoussPouss: je veux le copier coller et qu'il ai la bonne syntaxe

GitHub Copilot: Voici le README.md avec la bonne syntaxe Markdown, prêt à être copié-collé :

```markdown
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
```

## Auteur

Guillaume - Étudiant à Holberton School
