
public class SelectSort {
	public static void main(String[] args) {
		int[] array = { 9, 8, 7, 6, 4, 3, 1 };

		System.out.println("Using Select Sort: ");
		selectSort(array);
		Print(array);
	}

	public static void selectSort(int num[]) {
		int i, j, min, aux, tam = num.length;
		for (i = 0; i < (tam - 1); i++) {
			min = i;
			for (j = (i + 1); j < tam; j++) {
				if (num[j] < num[min])
					min = j;
			}
			if (num[i] != num[min]) {
				aux = num[i];
				num[i] = num[min];
				num[min] = aux;
			}
		}
	}

	public static void Print(int[] array) {
		for (int i = 0; i < array.length; i++) {
			System.out.println(array[i]);
		}
	}
}
