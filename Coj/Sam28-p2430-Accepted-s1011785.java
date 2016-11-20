import java.util.Scanner;
import java.math.BigInteger;
/**
 *
 * @author Admin
 */
public class Triangular {

    public static BigInteger sqrt(BigInteger n) {
	BigInteger a = BigInteger.ONE;
	BigInteger b = n.shiftRight(5).add(BigInteger.valueOf(8));
	while (b.compareTo(a) >= 0) {
		BigInteger mid = a.add(b).shiftRight(1);
		if (mid.multiply(mid).compareTo(n) > 0) {
			b = mid.subtract(BigInteger.ONE);
		} else {
			a = mid.add(BigInteger.ONE);
		}
	}
	return a.subtract(BigInteger.ONE);
}


    public static void main(String[] args) {
            
        Scanner in = new Scanner(System.in);
    
       BigInteger number = in.nextBigInteger();

        while(number.compareTo(BigInteger.valueOf(0)) != 0) {
                
       // BigInteger eight = new BigInteger("8");
      //  BigInteger ONE = new BigInteger("1");

       number = number.multiply(BigInteger.valueOf(8));
    //          System.out.println(number);

       number = number.add(BigInteger.valueOf(1));
//              System.out.println(number);

              
       BigInteger sqrt = new BigInteger("0");
       sqrt = sqrt.add(sqrt(number));
       BigInteger Multiply = new BigInteger("0");
       Multiply = sqrt.multiply(sqrt);
               //   System.out.println(Multiply);

       
      // System.out.println(Multiply);

       if(Multiply.compareTo(number) == 0){
         System.out.println("YES");

       }else {
           System.out.println("NO");
       }
        //int sqrt = (int) Math.sqrt(number);

        /*if(sqrt*sqrt == number) {

            System.out.println(number+" is a perfect square number!");

        }else {

            System.out.println(number+" is NOT a perfect square number!");

        }

         
*/
             number = in.nextBigInteger();

    }
    
}
}