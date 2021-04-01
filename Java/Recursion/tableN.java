import java.util.*;
class tableN{
	void tab(int n,int c){
		if(c==11) return;
		System.out.println(n+" x "+c +"="+ n*c);
		tab(n,c+1);
	}
	public static void main(String[]args){
		Scanner sc = new Scanner(System.in);
		tableN t = new tableN();
		int tb = sc.nextInt();
		t.tab(tb,1);
	}
}
