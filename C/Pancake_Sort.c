void do_flip(int vetor[], int TAM, int num) {
    int i, swap;

    for(i = 0; i < --num; i++) {
        swap		= vetor[i];
        vetor[i]	= vetor[num];
        vetor[num]	= swap;
    }
}

void Pancake_Sort(int vetor[], unsigned int TAM) {
    // If it's less than 2 long, just return it as sorting isn't really needed...
    int i, a, max_num_pos;

    for(i = TAM; i > 1; i--) {
        // Find position of the max number in pos(0) to pos(i)
        max_num_pos = 0;

        for(a = 0; a < i; a++) {
            if(vetor[a] > vetor[max_num_pos])
                max_num_pos = a;
        }
 
        if(max_num_pos == i - 1)
            // It's where it need to be, skip
            continue;
 
        // Get the found max number to the beginning of the vetor (unless it already is)
        if(max_num_pos) {
            do_flip(vetor, TAM, max_num_pos + 1);
        }
 
        // And then move it to the end of the range we're working with (pos(0) to pos(i))
        do_flip(vetor, TAM, i);
 
        // Then everything above vetor[i-1] is sorted and don't need to be touched
    }
 
}