int circle_sort_inner(int start[], int end[]) {
	int *p, *q, t, swapped;
 
	if (start == end) return 0;
 
	// funny "||" on next line is for the center element of odd-lengthed array
	for (swapped = 0, p = start, q = end; p<q || (p==q && ++q); p++, q--)
		if (*p > *q)
			t = *p, *p = *q, *q = t, swapped = 1;
 
	// q == p-1 at this point
	return swapped | circle_sort_inner(start, q) | circle_sort_inner(p, end);
}
 
//helper function to show arrays before each call
void Circle_Sort(int vetor[], int TAM) {
	circle_sort_inner(vetor, vetor + (TAM - 1));
}