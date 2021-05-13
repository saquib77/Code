import java.util.*;

class Arrlis1 {
	public static void main(String[] args) {
		LinkedList<String> c = new LinkedList<>();
		c.add("Jhon");
		c.add("Damon");
		c.add("Stefan");
		if (c instanceof RandomAccess) {
			for (int i = 0; i < c.size(); i++) {
				System.out.println(c.get(i));
			}
		} else {
			for (int i = 0; i < c.size(); i++) {
				System.out.println(c.get(i));
			}
		}
	}
}
