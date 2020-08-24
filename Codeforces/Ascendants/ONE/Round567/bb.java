import java.util.*;
import java.io.*;
import java.math.*;

public class bb {
	static Scanner sc = new Scanner(System.in);
	public static void main(String[] args) {
		int n = sc.nextInt();
		String s = sc.next();
		StringBuffer sub = new StringBuffer();
		for(int i = 0; i < 100020; ++i) {
			sub.append("9");
		}
		// System.err.println("1");
		BigInteger ans = new BigInteger(String.valueOf(sub));
		for(int i = 1; i < n; ++i) {
			if(s.charAt(i) != '0') {
				BigInteger one = new BigInteger(s.substring(0, i));
				BigInteger two = new BigInteger(s.substring(i));
				BigInteger sum = one.add(two);
				ans = ans.min(sum);
			}
		}
		System.out.println(ans);
	}
}