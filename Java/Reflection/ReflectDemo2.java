import java.lang.reflect.*;
class ReflectDemoMain{
	private static void demo(int a,String s) throws Exception{}
}

class ReflectDemo2{
	public static void main(String[]args){

		Class cr = ReflectDemoMain.class;
		Method[] m = cr.getDeclaredMethods();
		int mod = m[0].getModifiers();

		String s = (Modifier.toString(mod));
		String s1 = m[0].getName();

		Class rt = m[0].getReturnType();
		Class[] pm = m[0].getParameterTypes();
		Class[] nm = m[0].getExceptionTypes();

		System.out.println("class "+cr.getName()+" {");

		System.out.print("\t"+s+" "+rt.getName()+" "+s1+" (");

		System.out.print(pm[0].getName()+", ");

		System.out.print(pm[1].getName()+" ");

		System.out.print(") throws ");

		System.out.println(nm[0].getName()+" ");

		System.out.println("}");
	}

}
