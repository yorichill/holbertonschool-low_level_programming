#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - Point d'entrée pour tester les fonctions de la table de hachage.
 *
 * Return: EXIT_SUCCESS si tout se passe bien, EXIT_FAILURE sinon.
 */
int main(void)
{
    hash_table_t *ht;

    /* 1. Test de la création de la table (0-hash_table_create.c) */
    printf("--- Test 1 : Création de la table ---\n");
    ht = hash_table_create(1024);
    if (!ht)
    {
        fprintf(stderr, "Échec de la création de la table.\n");
        return (EXIT_FAILURE);
    }
    printf("Table de hachage créée avec succès (taille: %lu).\n\n", ht->size);

    /* 2. Test d'insertion (3-hash_table_set.c) */
    printf("--- Test 2 : Insertion d'éléments ---\n");
    if (hash_table_set(ht, "holberton", "best school"))
        printf("holberton -> best school : OK\n");
    if (hash_table_set(ht, "python", "interpreted"))
        printf("python -> interpreted : OK\n");
    if (hash_table_set(ht, "javascript", "scripting"))
        printf("javascript -> scripting : OK\n");

    /* Test de collision (clé différente mais même index) */
    /* Ces deux clés ("lithophane" et "mentioner") hash souvent au même index. */
    if (hash_table_set(ht, "lithophane", "collision test 1"))
        printf("lithophane -> collision test 1 : OK\n");
    if (hash_table_set(ht, "mentioner", "collision test 2"))
        printf("mentioner -> collision test 2 : OK\n");
    
    /* Test de mise à jour (écraser une valeur existante) */
    if (hash_table_set(ht, "holberton", "school of excellence"))
        printf("holberton (MÀJ) -> school of excellence : OK\n");
    printf("\n");

    /* 3. Test de récupération (4-hash_table_get.c) */
    printf("--- Test 3 : Récupération d'éléments ---\n");
    printf("Valeur pour 'holberton': %s\n", hash_table_get(ht, "holberton"));
    printf("Valeur pour 'python': %s\n", hash_table_get(ht, "python"));
    printf("Valeur pour 'lithophane': %s\n", hash_table_get(ht, "lithophane"));
    printf("Valeur pour clé non existante ('non_existante'): %s\n", hash_table_get(ht, "non_existante"));
    printf("\n");

    /* 4. Test d'affichage (5-hash_table_print.c) */
    printf("--- Test 4 : Affichage de la table ---\n");
    hash_table_print(ht);
    printf("\n");

    /* 5. Nettoyage de la mémoire (6-hash_table_delete.c) */
    printf("--- Test 5 : Suppression de la table ---\n");
    hash_table_delete(ht);
    printf("Table supprimée. Fin du test.\n");

    return (EXIT_SUCCESS);
}