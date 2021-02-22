class Outer{
	void p(){
		class Inner{
			void p2(){
				System.out.println("P2 Method");
			}
		}
		Inner i=new Inner();
		i.p2();
	}
}
class LocalInner{
	public static void main(String[]args){
		Outer o=new Outer();
		o.p();
	}
}
