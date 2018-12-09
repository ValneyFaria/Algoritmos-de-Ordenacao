
public class HeapSort {
	public static void main(String[] args) {
		int[] array = { 9, 8, 7, 6, 4, 3, 1 };
		
		System.out.println("Using Heap Sort: ");
		heapSort(array);
		Print(array);
	}

	static void heapSort(int a[]) {
		int n = a.length;
		int i = n / 2, pai, filho, t;
		while (true) {
			if (i > 0) {
				i--;
				t = a[i];
			} else {
				n--;
				if (n == 0)
					return;
				t = a[n];
				a[n] = a[0];
			}
			pai = i;
			filho = i * 2 + 1;
			while (filho < n) {
				if ((filho + 1 < n) && (a[filho + 1] > a[filho]))
					filho++;
				if (a[filho] > t) {
					a[pai] = a[filho];
					pai = filho;
					filho = pai * 2 + 1;
				} else {
					break;
				}
			}
			a[pai] = t;
		}
	}

	public static void Print(int[] array) {
		for (int i = 0; i < array.length; i++) {
			System.out.println(array[i]);
		}
	}
}
