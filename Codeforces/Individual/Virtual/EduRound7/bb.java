import java.util.*;
import java.lang.*;
import java.io.*;
import java.text.*;

public class Main {
	public static void main (String[] args) throws java.lang.Exception {
		Scanner sc = new Scanner(System.in);
		String myTime = sc.next();
        SimpleDateFormat df = new SimpleDateFormat("HH:mm");
        Date d = df.parse(myTime); 
        Calendar cal = Calendar.getInstance();
        cal.setTime(d);
        int add_this = sc.nextInt();
        cal.add(Calendar.MINUTE, add_this);
        String newTime = df.format(cal.getTime());
        System.out.println(newTime);
	}
}