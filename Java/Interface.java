interface MyInterface{
	int x=10;
	void printer();
}

class InterfaceDemo implements MyInterface{
	public void printer(){
		System.out.println("Printer"+" "+x);
	}
	public void p(){
		System.out.println("P Method");
	}
}
class InterfaceMain{
	public static void main(String[]args){
		MyInterface id = new InterfaceDemo();
		InterfaceDemo id1 = new InterfaceDemo();
		id.printer();
		id1.p();
		System.out.println(id.x);
	}
}
