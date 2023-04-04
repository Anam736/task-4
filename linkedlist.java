import java.util.*;

public class linkedlist {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number: ");
        int num = sc.nextInt();

        LinkedList<Integer> list = new LinkedList<Integer>();
        while (num > 0) {
            int digit = num % 10;
            list.addFirst(digit);
            num /= 10;
        }

        int count = 0;
        Iterator<Integer> iter = list.iterator();
        while (iter.hasNext()) {
            int digit = iter.next();
            if (digit == 0) {
                iter.remove();
                count++;
            }
        }
        for (int i = 0; i < count; i++) {
            list.addLast(0);
        }

        System.out.print("Result: ");
        for (int digit : list) {
            System.out.print(digit);
        }
        sc.close();
    }
}
