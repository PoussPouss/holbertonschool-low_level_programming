#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * error_exit - Gère les erreurs et quitte le programme avec un code
 * @code: Code de sortie
 * @message: Message d'erreur à afficher
 * @file: Nom du fichier concerné
 */
void error_exit(int code, const char *message, char *file)
{
    dprintf(STDERR_FILENO, "%s%s\n", message, file);
    exit(code);
}

/**
 * main - Programme principal pour copier le contenu d'un fichier vers un autre
 * @argc: Nombre d'arguments
 * @argv: Tableau des arguments
 *
 * Return: 0 en cas de succès
 */
int main(int argc, char *argv[])
{
    int file_from, file_to, read_count, write_count, close_status;
    char buffer[1024];

    /* Vérification du nombre d'arguments */
    if (argc != 3)
    {
        dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
        exit(97);
    }

    /* Ouverture des fichiers */
    file_from = open(argv[1], O_RDONLY);
    if (file_from == -1)
        error_exit(98, "Error: Can't read from file ", argv[1]);

    file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
    if (file_to == -1)
    {
        close(file_from);
        error_exit(99, "Error: Can't write to ", argv[2]);
    }

    /* Copie du contenu */
    while ((read_count = read(file_from, buffer, 1024)) > 0)
    {
        write_count = write(file_to, buffer, read_count);
        if (write_count == -1)
        {
            close(file_from);
            close(file_to);
            error_exit(99, "Error: Can't write to ", argv[2]);
        }
    }

    /* Vérification de la lecture */
    if (read_count == -1)
    {
        close(file_from);
        close(file_to);
        error_exit(98, "Error: Can't read from file ", argv[1]);
    }

    /* Fermeture des fichiers */
    close_status = close(file_from);
    if (close_status == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
        exit(100);
    }

    close_status = close(file_to);
    if (close_status == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
        exit(100);
    }

    return (0);
}