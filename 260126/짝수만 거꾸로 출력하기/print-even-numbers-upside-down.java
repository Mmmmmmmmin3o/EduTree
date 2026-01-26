import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // Please write your code here.
        Scanner sc=new Scanner(System.in);

        int N=sc.nextInt();
        int a=0;

        int[] list=new int[N];
        int[] answer=new int[N];

        for(int i=0; i<N; i++){
            list[i]=sc.nextInt();
        }

        for(int i=0; i<N; i++){
            if(list[i]%2==0){
                answer[a]=list[i];
                a++;
            }
        }

        for(int i=a-1; i>=0; i--){
            System.out.printf("%d ", answer[i]);
        }
    }
}