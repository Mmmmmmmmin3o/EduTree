import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // Please write your code here.
        Scanner sc=new Scanner(System.in);

        String[] arr={"apple","banana", "grape", "blueberry", "orange"};
        String x=sc.next();

        int count=0;
        int size=arr.length;

        if(size>=4){
            for(int i=0; i<size; i++){
                char third=arr[i].charAt(2);
                char fourth=arr[i].charAt(3);

                if(third==x.charAt(0)||x.charAt(0)==fourth){
                    System.out.println(arr[i]);
                    count++;
                }
            }
        }

        System.out.println(count);

    }
}