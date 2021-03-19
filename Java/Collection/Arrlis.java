import java.util.*;
import java.lang.*;
class Arrlis{
	public static void main(String[]args){
		Collection<String> c = new ArrayList<>();
		c.add("Jhon");
		c.add("Damon");
		c.add("Stefan");
		Iterator it = c.iterator();
		while(it.hasNext()){
			System.out.println(it.next());
		}
	}
}
