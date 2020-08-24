import java.util.*;
import java.lang.*;
import java.io.*;
import

class Mainn {
    static Scanner sc = new Scanner(System.in);
	public static void main (String[] args) throws java.lang.Exception {
		BigInteger t = sc.nextBigInteger(), w = sc.nextBigInteger(), b = nextBigInteger();
		BigInteger mine = w.min(b);
		BigInteger gcdwb = w.gcd(b);
		BigInteger lcmwb = (w.multiply(b)).divide(gcdwb);
		BigInteger noOfLcm = t.divide(lcmwb);
		BigInteger last = noOfLcm.multiply(lcmwb);
		noOfLcm = noOfLcm.subtract(BigInteger.valueOf(1));
		BigInteger nod = noOfLcm.multiply(mine);
		nod = nod.add(mine);
		BigInteger extra = t.subtract(last);
		extra = extra.add(BigInteger.valueOf(1));
		nod = nod.add(mine.min(extra));
		nod = nod.subtract(BigInteger.valueOf(1));
		BigInteger gcdans = nod.gcd(t);
		nod = nod.divide(gcdans);
		t = t.divide(gcdans);
		System.out.println(nod + "/" + t);
	}
}
