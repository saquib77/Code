package refPkg;
import java.lang.reflect.*;
class ReflectDemo1{
	public static void main(String[]args){
		ReflectDemo r = new ReflectDemo();
		Class cl=r.getClass();
		Constructor[] car = cl.getDeclaredConstructors();
		Field[] fi = cl.getDeclaredFields();
		Method[] ma= cl.getDeclaredMethods();
		for(int i=0;i<car.length;i++){
			System.out.println(car[i].getName());
		}
		for(int i=0;i<fi.length;i++){
                        System.out.println(fi[i].getName());
                }
		for(int i=0;i<ma.length;i++){
                        System.out.println(ma[i].getName());
                }
	}
}
