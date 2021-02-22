final class Parent{
	public final void p(){
		System.out.println("P Method");
	}
}
class Child extends Parent{
	public void p(){
		System.out.println("P of Child");
	}
}
class PCmain{
	public static void main(String[]args){
		Child c=new Child();
		c.p();
	}
}
