class Parent{
	private void p1(){
		System.out.println("P1");
	}
	public void p2(){
		System.out.println("P2");
	}
}

class Child extends Parent{
	public void p2(){
		System.out.println("P3");
	}
}

class IMain{
	public static void main(String[]args){
		Parent p=new Parent();
		p.p2();
		Parent c=new Child();
		c.p2();
	}
}
