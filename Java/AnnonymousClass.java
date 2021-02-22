interface A{
	void printer();
}
class AnnoymousClass{
	public static void main(String[]args){
		A a=new A(){
			public void printer(){
				System.out.println("Printer Method");
			}
		};
		a.printer();
	}
}
