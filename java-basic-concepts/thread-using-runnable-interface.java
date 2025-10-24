

class mythread implements Runnable{
    public void run(){
        System.out.println("new thread");
    }
}

public class Main
{
	public static void main(String[] args) {
	    mythread obj=new mythread();
		Thread t1=new Thread(obj);
		t1.start();
		
	}
}
