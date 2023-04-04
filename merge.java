import java.util.*;

public class merge {
    public static void main(String[] args) {
        ArrayList<Integer> list1 = new ArrayList<>();
        ArrayList<Integer> list2 = new ArrayList<>();

        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter integers for the first list, type 'end' to stop:");
        while (scanner.hasNextInt()) {
            int num = scanner.nextInt();
            list1.add(num);
        }

        scanner.nextLine();
        System.out.println("Enter integers for the second list, type 'end' to stop:");
        while (scanner.hasNextInt()) {
            int num = scanner.nextInt();
            list2.add(num);
        }
        ArrayList<Integer> mergedlist = new ArrayList<>(list1);
        mergedlist.addAll(list2);
        Collections.sort(mergedlist);

        System.out.println("the merged and sorted list is:");
        for (int i = 0; i < mergedlist.size(); i++) {
            System.out.print(mergedlist.get(i) + " ");
        }

        System.out.println();
        scanner.close();

    }
}
