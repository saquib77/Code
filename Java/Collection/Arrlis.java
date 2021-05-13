import java.util.*;

class Arrlis {
	public static void main(String[] args) {
		Collection<String> c = new ArrayList<>();
		c.add("Jhon");
		c.add("Damon");
		c.add("Stefan");
		/*
		 * Iterator<String> it = c.iterator(); while(it.hasNext()){ String s =
		 * it.next(); System.out.println(s); }
		 */
		for (String s : c) {
			System.out.println(s);
		}
	}
}
