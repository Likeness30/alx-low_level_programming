#include "hash_tables.h"

/**
 * hash_table_print - This prints the key:value from ht
 * @ht: The pointer to hash table
 *
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int x = 0;
	hash_node_t  *bucket;
	int not_fin = 0;

	if (!ht)
		return;

	printf("{");
	for (x = 0; x < ht->size; x++)
	{
		bucket = ht->array[x];
		while (bucket)
		{
			if (not_fin)
				printf(", ");
			printf("'%s': '%s'", bucket->key, bucket->value);
			not_fin = 1;
			bucket = bucket->next;
		}
	}
	printf("}\n");
}
