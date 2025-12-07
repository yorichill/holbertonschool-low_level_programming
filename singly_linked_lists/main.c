#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h" /* Assurez-vous que votre header 'lists.h' est bien inclus */

/**
 * main - Point d'entrée pour tester les fonctions de la liste chaînée simple.
 *
 * Return: EXIT_SUCCESS (0) si tout se passe bien.
 */
int main(void)
{
    list_t *head;
    
    head = NULL; /* La liste commence vide */
    
    printf("--- 1. Test d'ajout en tête (2-add_node.c) ---\n");
    
    /* Les nouveaux nœuds sont ajoutés au DÉBUT de la liste */
    if (!add_node(&head, "Holberton"))
        fprintf(stderr, "Échec de l'ajout de nœud.\n");
    if (!add_node(&head, "School"))
        fprintf(stderr, "Échec de l'ajout de nœud.\n");
    if (!add_node(&head, "C"))
        fprintf(stderr, "Échec de l'ajout de nœud.\n");
    
    printf("Liste après ajout en tête :\n");
    
    /* Test de 0-print_list.c */
    print_list(head); 
    
    /* Note : On utilise la fonction print_list pour vérifier la fonction 1-list_len.c 
     * en regardant le nombre d'éléments imprimés.
     */
    printf("\n");

    printf("--- 2. Test d'ajout en fin (3-add_node_end.c) ---\n");
    
    /* Les nouveaux nœuds sont ajoutés à la FIN de la liste existante */
    if (!add_node_end(&head, "End-1"))
        fprintf(stderr, "Échec de l'ajout de nœud en fin.\n");
    if (!add_node_end(&head, "End-2"))
        fprintf(stderr, "Échec de l'ajout de nœud en fin.\n");
    
    printf("Liste après ajout en fin :\n");
    print_list(head); 
    printf("\n");

    printf("--- 3. Nettoyage de la mémoire (4-free_list.c) ---\n");
    
    /* Test de 4-free_list.c */
    free_list(head);
    
    /* IMPORTANT : Après avoir free(head), le pointeur head doit être NULL pour éviter 
     * les dangling pointers, même si la fonction free_list est censée le gérer.
     * Pour une propreté maximale, vous pouvez re-définir head à NULL si free_list 
     * ne le fait pas (mais généralement, on ne le fait pas dans le main de test).
     */
    printf("Mémoire libérée avec succès. Fin du test.\n");
    
    return (EXIT_SUCCESS);
}