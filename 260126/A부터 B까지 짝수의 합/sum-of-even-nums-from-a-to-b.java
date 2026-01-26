import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // Please write your code here.
        Scanner sc=new Scanner(System.in);
        int[] arr=new int[2];
        int answer=0;

        for(int i=0; i<2; i++){
            arr[i]=sc.nextInt();
        }

        for(int i=arr[0]; i<=arr[1]; i++){
            if(i%2==0){
                answer+=i;
            }
        }

        System.out.println(answer);
    }
}