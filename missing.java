import java.util.*;

public class missing {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int[] arr = new int[100];

        int num;
        String input;
        int count = 0;
        while (count < 100) {
            System.out.print("enter an integer from 1 to 100 , type 'end' to stop: ");
            input = sc.next();
            if (input.equals("end")) {
                break;
            }
            num = Integer.parseInt(input);
            if (num < 1 || num > 100) {
                System.out.println("invalid input. please enter an integer from 1 to 100.");
                continue;
            }
            arr[num - 1] = num;
            count++;
        }

        List<Integer> missingNums = new ArrayList<>();
        for (int i = 0; i < 100; i++) {
            if (arr[i] == 0) {
                missingNums.add(i + 1);
            }
        }

        if (missingNums.isEmpty()) {
            System.out.println("No missing numbers found.");
        } else {
            System.out.println("The missing numbers are: ");
            for (int i : missingNums) {
                System.out.print(i + " ");
            }
        }
        sc.close();
    }
}
