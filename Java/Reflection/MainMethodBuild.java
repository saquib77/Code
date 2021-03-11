import java.lang.reflect.Method;
class MainMethodBuild{
	public static void main(String[] args) throws Exception{
		Class cl = MethodBuild.class;
		Method m = cl.getDeclaredMethod("add",int.class,int.class);
		int x=10,y=10;
		int ob=(Integer)m.invoke(x,y);
		System.out.println(ob);
	}
}
