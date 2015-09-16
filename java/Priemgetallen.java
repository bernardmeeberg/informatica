public class Priemgetallen {
    public static void main(String[]args) {
        for (int i = 0; i <= 1000000000; i++) {
            for (int j = 2; j <= i/2; j++) {
                if (i % j != 0) {
                    System.out.println(i);
                }
                break;
            }
        }
    }
}