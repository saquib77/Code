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
class FactoryMethod{
	public static Parent Factory(){
		return (new Child());
	}
}
class IMain{
	public static void main(String[]args){
		Parent c=FactoryMethod.Factory();
		c.p2();
	}
}
