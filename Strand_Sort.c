#include <stdio.h>

typedef struct node_t *node, node_t;

struct node_t {
	int v;
	node next;
};

typedef struct {
	node head, tail;
} slist;

void push(slist *l, node e) {
	if (!l->head)
		l->head = e;
	if (l->tail)
		l->tail->next = e;
	l->tail = e;
}

node removehead(slist *l) {
	node e = l->head;
	if (e)
	{
		l->head = e->next;
		e->next = 0;
	}
	return e;
}

void join(slist *a, slist *b) {
	push(a, b->head);
	a->tail = b->tail;
}

void merge(slist *a, slist *b) {
	slist r = {0};
	while (a->head && b->head)
		push(&r, removehead(a->head->v <= b->head->v ? a : b));

	join(&r, a->head ? a : b);
	*a = r;
	b->head = b->tail = 0;
}

void Strand_Sort(int vetor[], int TAM) {
	node_t all[TAM];

	// array to list
	for (int i = 0; i < TAM; i++)
		all[i].v = vetor[i], all[i].next = i < TAM - 1 ? all + i + 1 : 0;

	slist list = {all, all + TAM - 1}, rem, strand = {0}, res = {0};

	for (node e = 0; list.head; list = rem) {
		rem.head = rem.tail = 0;
		while ((e = removehead(&list)))
			push((!strand.head || e->v >= strand.tail->v) ? &strand : &rem, e);

		merge(&res, &strand);
	}

	// list to array
	for (int i = 0; res.head; i++, res.head = res.head->next)
		vetor[i] = res.head->v;
}