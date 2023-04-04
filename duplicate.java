import java.util.*;

public class duplicate {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("enter the size of the array: ");
        int size = sc.nextInt();

        int[] arr = new int[size];
        System.out.println("enter the elements of the array: ");
        for (int i = 0; i < size; i++) {
            arr[i] = sc.nextInt();
        }

        Set<Integer> set = new HashSet<Integer>();
        for (int i = 0; i < size; i++) {
            set.add(arr[i]);
        }

        System.out.println("array after removing duplicates is :");
        for (int num : set) {
            System.out.print(num + " ");
        }

        sc.close();
    }
}
