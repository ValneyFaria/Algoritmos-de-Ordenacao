class BubbleSort:

    def bubble_sort(self, lista_entrada):
        for i, valor_atual in enumerate(lista_entrada):
            try:
                if lista_entrada[i+1] < valor_atual:
                    lista_entrada[i] = lista_entrada[i+1]
                    lista_entrada[i+1] = valor_atual
                    self.bubble_sort(lista_entrada)
            except IndexError:
                pass
        return lista_entrada


if __name__ == "__main__":
    python_sort = BubbleSort()
    lista_entrada = [72, 35, 8, 90, 65, 44, 31, 22, 29, 78, 83]
    python_sort.bubble_sort(lista_entrada)
    print('Lista Ordenada:')
    print(lista_entrada)
