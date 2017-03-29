import java.math.BigInteger;
import java.util.Scanner;

class Main {
    public static void main(String[] args)
    {
        Scanner in = new Scanner(System.in);
        int x;
        BigInteger A = new BigInteger("0");
        while(true)
        {
            A = in.nextBigInteger();
    		x = in.nextInt();
    		if(x == 0 && A.compareTo(BigInteger.ZERO) == 0)
    			break;
    		A = A.pow(x);
    		System.out.println(A);
    	}
    }
}
