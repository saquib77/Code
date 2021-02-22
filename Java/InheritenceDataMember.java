class Parent{
	int x;
	int y;
	Parent(int a,int b){
		x=a;
		y=b;
	}
}
class Child extends Parent{
	int x;
	int z;
	Child(int a,int b,int c,int d){
		super(a,b);
		x=c;
		z=d;
	}
}

class VariableDemo{
	public static void main(String[]args){
		Parent c=new Child(10,20,30,40);
		System.out.println(c.x+" "+c.y);
	}
}
