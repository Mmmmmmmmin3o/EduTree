import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // Please write your code here.
        Scanner sc=new Scanner(System.in);
        String[] arr=new String[2];

        for(int i=0; i<2; i++){
            arr[i]=sc.next();
        }

        if (arr[0].equals(arr[1])) {
            System.out.printf("same");
        } else if(arr[0].length()>arr[1].length()){
            System.out.printf("%s %d", arr[0], arr[0].length());
        }
        else System.out.printf("%s %d", arr[1], arr[1].length());

    }
}