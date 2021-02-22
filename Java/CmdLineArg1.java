class CMD{
	void printer(float f,int... x){
		System.out.println(f);
		for(int i=0;i<x.length;i++){
			System.out.println(x[i]);
		}
	}
}
class CMDMain{
	public static void main(String[]args){
		CMD c=new CMD();
		c.printer(3.5f,1,2,3,4,5,6,7);
	}
}
