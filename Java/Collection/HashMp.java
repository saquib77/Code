import java.util.*;

class HsDemo {
	String s;
	int a;

	HsDemo(String x, int y) {
		s = x;
		a = y;
	}
}

class htDemo {
	public static void main(String[] args) {
		HsDemo h1 = new HsDemo("Saquib", 20);
		HsDemo h2 = new HsDemo("Saquib", 20);
		System.out.println(h1.hashCode() + " " + h2.hashCode());
	}
}
