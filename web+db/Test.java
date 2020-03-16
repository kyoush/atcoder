
import java.util.Scanner;

public class Test {
    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);
        int N = cin.nextInt(); // N の値を入力する
        for (int i = 0; i < N; i++) {
            int A = cin.nextInt();
            long ans = 0;
            for (int j = 1; j <= A; j++) {
                ans += j;
            }
            System.out.println(ans);
        }
    }
}
