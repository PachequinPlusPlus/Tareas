
import java.util.Scanner;
import java.math.BigInteger;
/**
 *
 * @author Admin
 */
public class Main {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
       int a = in.nextInt();
       BigInteger raised = new BigInteger("2");
       raised = raised.pow(a);
       System.out.println(raised);
    }
    
}
