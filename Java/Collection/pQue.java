import java.util.*;

class pQue{
	public static void main(String[]args){
		ArrayDeque<String> q = new ArrayDeque<>();
		q.addFirst("Lucknow1");
		q.addFirst("Lucknow2");
		q.addLast("Lucknow3");
		q.addLast("Lucknow4");


		Iterator<String> it = q.iterator();
		while(it.hasNext()){
			System.out.println(it.next());
		}
		//q.forEach((v)->{ System.out.println(v); });
	}
}
