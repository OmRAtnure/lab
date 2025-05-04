public class shellSort {
    static void soort(int[] arr) {
        int n = arr.length;

        for (int gap = n / 2; gap > 0; gap = gap / 2) {
            for (int i = gap; i < n; i++) {
                int temp = arr[i];
                int j = i;

                while (j >= gap && arr[j - gap] > temp) {
                    arr[j] = arr[j - gap];
                    j = j - gap;
                }

                arr[j] = temp;
            }
        }
    }

    static void printArray(int[] arr) {
        for (int num : arr) {
            System.out.print(num + " ");
        }
        System.out.println();
    }

    public static void main(String[] args) {
        int[] arr = { 5, 3, 4, 2, 1 };
        System.out.print("Orignal array: ");
        printArray(arr);
        System.out.print("sorted array: ");
        soort(arr);
        printArray(arr);
    }
}