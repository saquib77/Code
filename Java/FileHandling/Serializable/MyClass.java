import java.io.*;
class MyClass implements Serializable {
	transient private int age;
	public MyClass(int x){ age=x; }
	public String toString(){ return "Age is "+age; }
}
