class OverloadingDemo{
	int x,y,z;
	OverloadingDemo(){}
	OverloadingDemo(int a){
		x=a;
	}
	OverloadingDemo(int a,int b){
		this(a);
		y=b;
	}
	OverloadingDemo(int a,int b,int c){
		this(a,b);
		z=c;
	}
	void printer(){
		int x=10;
		System.out.println(x);
	}
}
class OverloadingMain{
	public static void main(String[]args){
		OverloadingDemo ob=new OverloadingDemo(1,2);
		System.out.println(ob.x+" "+ob.y+" "+ob.z);
		ob.printer();
	}
}
