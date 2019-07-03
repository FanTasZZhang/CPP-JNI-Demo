public class Add
{
	static
	{
		System.load("/home/jiaming-zhang/Desktop/cppJNITest/libTwoNo.so");
	}
	public native int add(int a, int b);
	public static void main(String args[]){
		Add a = new Add();
		System.out.println("hello " + a.add(3,1));
	}
}
