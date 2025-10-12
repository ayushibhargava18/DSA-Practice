import java.util.*;

public class heapsortassign {
    public static void main(String[] args) {
        int[] A = {4, 1, 3, 2, 16, 9, 10, 14, 8, 7};
        int n = A.length;
        heapsort(A, n);
    }
    public static void heapsort(int[] A, int n) {
        buildmaxheap(A, n);
        System.out.println("\ninitial heap:");
        printArray(A);
        printTree(A, n);
        for (int i = n - 1; i >= 1; i--) {
            exchange(A, 0, i);
            System.out.println("\n A[0] exchange A[" + i + "]:");
            printArray(A);
            printTree(A, i);

            maxheapify(A, 0, i);
            System.out.println("\nindex " + (i - 1) + ":");
            printArray(A);
            printTree(A, i);
        }
        System.out.println("\nfinal Array:");
        printArray(A);
    }
    public static void buildmaxheap(int[] A, int n) {
        for (int i = n / 2 - 1; i >= 0; i--) {
            maxheapify(A, i, n);
        }
    }

    public static void maxheapify(int[] A, int i, int n) {
        int l = 2 * i + 1;
        int r = 2 * i + 2;
        int largest;
        if (l < n && A[l] > A[i])
            largest = l;
        else
            largest = i;
        if (r < n && A[r] > A[largest])
            largest = r;
        if (largest != i) {
            exchange(A, i, largest);
            maxheapify(A, largest, n);
        }
    }
    public static void exchange(int[] A, int i, int j) {
        int temp = A[i];
        A[i] = A[j];
        A[j] = temp;
    }
    public static void printArray(int[] A) {
        System.out.println(Arrays.toString(A));
    }

    public static void printTree(int[] A, int size) {
        int levels = (int) Math.floor(Math.log(size) / Math.log(2)) + 1;
        int index = 0;
        for (int level = 0; level < levels; level++) {
            int Count = (int) Math.pow(2, level);
            int spacesBefore = (int) Math.pow(2, levels - level) - 1;
            int spacesBetween = (int) Math.pow(2, levels - level + 1) - 1;
            printSpaces(spacesBefore);
            for (int j = 0; j < Count && index < size; j++) {
                System.out.printf("%2d", A[index]);
                index++;
                if (j < Count - 1)
                    printSpaces(spacesBetween);
            }
            System.out.println();
        }
        System.out.println();
    }
    private static void printSpaces(int count) {
        for (int i = 0; i < count; i++)
            System.out.print(" ");
    }
}
