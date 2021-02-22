class NonStaticDemo{
	NonStaticDemo(){
		System.out.println("Constructor Called");
	}
	{
		System.out.println("Non-Static Block");
	}
	static {
		System.out.println("Static Block");
	}
}

class NonStaticMain{
	public static void main(String[]args){
		NonStaticDemo nsd1=new NonStaticDemo();
		NonStaticDemo nsd2=new NonStaticDemo();
	}
}
