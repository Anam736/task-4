import java.util.Scanner;
import java.io.File;
import java.io.IOException;
import java.io.PrintWriter;

public class copy {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter the input file name: ");
        String inputfilename = input.nextLine();
        System.out.print("Enter the output file name: ");
        String outputfilename = input.nextLine();

        try {
            File inputfile = new File(inputfilename);
            Scanner filereader = new Scanner(inputfile);

            File outputfile = new File(outputfilename);
            PrintWriter filewriter = new PrintWriter(outputfile);

            while (filereader.hasNextLine()) {
                String line = filereader.nextLine();
                filewriter.println(line);
            }

            filereader.close();
            filewriter.close();
            System.out.println("File copied successfully.");
        } catch (IOException e) {
            System.out.println("Error: " + e.getMessage());
        }
        input.close();
    }
}
