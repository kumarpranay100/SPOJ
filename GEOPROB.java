import java.util.*;
import java.lang.*;
import java.math.BigInteger;

class Main
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner in = new Scanner(System.in);
		int t;
		t=in.nextInt();
		while(t--!=0)
		{
			BigInteger B = new BigInteger(in.next());
			BigInteger C = new BigInteger(in.next());
			BigInteger D = new BigInteger(in.next());
			C = C.multiply(BigInteger.valueOf(2));
			C = C.subtract(B);
			C = C.subtract(D);
			System.out.println(C);
		}
	}
}
