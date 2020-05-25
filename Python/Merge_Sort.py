class MergeSort:

    def merge_sort(self, lista_entrada):

        if len(lista_entrada) > 1:

            meio = len(lista_entrada)/2

            lista_esquerda = lista_entrada[:meio]
            lista_direita = lista_entrada[meio:]

            self.merge_sort(lista_esquerda)
            self.merge_sort(lista_direita)

            i = 0
            j = 0
            k = 0

            while i < len(lista_esquerda) and j < len(lista_direita):

                if lista_esquerda[i] < lista_direita[j]:
                    lista_entrada[k] = lista_esquerda[i]
                    i += 1
                else:
                    lista_entrada[k] = lista_direita[j]
                    j += 1
                k += 1

            while i < len(lista_esquerda):

                lista_entrada[k] = lista_esquerda[i]
                i += 1
                k += 1

            while j < len(lista_direita):
                lista_entrada[k] = lista_direita[j]
                j += 1
                k += 1


if __name__ == "__main__":
    python_sort = MergeSort()
    lista_entrada = [72, 35, 8, 90, 65, 44, 31, 22, 29, 78, 83]
    python_sort.merge_sort(lista_entrada)
    print('Lista Ordenada:')
    print(lista_entrada)
