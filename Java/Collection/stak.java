import java.util.*;
class stakDemo{
	public static void main(String[]args){
		Stack<Integer> s = new Stack<>();
		s.push(11);
		s.push(12);
		s.push(13);
		System.out.println(s.search(12));
		while(!s.empty()){
			System.out.println(s.pop());
		}
	}
}
