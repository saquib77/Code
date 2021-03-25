import java.util.*;
class SetDemo{
	public static void main(String[]args){
		Set<Integer> s = new TreeSet<>();
		s.add(1);
		s.add(2);
		s.add(1);
		Iterator<Integer> it = s.iterator();
		while(it.hasNext()){
			System.out.println(it.next());
		}
		//q.forEach((v)->{ System.out.println(v); });
	}
}
