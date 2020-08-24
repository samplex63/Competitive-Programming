import java.util.*;
import java.io.*;

class Main {
	public static void main(String[] args) throws Exception {
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t-- > 0) {
			String inp = sc.next();
			String[] arr = inp.split(":");
			int day = Integer.parseInt(arr[2]);

			GregorianCalendar ob = new GregorianCalendar(Integer.parseInt(arr[0]), Integer.parseInt(arr[1]) - 1, day);
			int state = day % 2;

			int ans = 1;
			while(true) {
				ob.add(Calendar.DAY_OF_MONTH, 2);
				if(ob.get(Calendar.DAY_OF_MONTH) % 2 == state) {
					ans++;
				} else {
					break;
				}
			}
			System.out.println(ans);
		}
	}
}