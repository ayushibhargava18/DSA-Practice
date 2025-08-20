
class Parent1 {
    void fun() { System.out.println("Parent1"); }
}

class Parent2 {
    void fun() { System.out.println("Parent2"); }
}

class Main extends Parent1, Parent2 
{
    public static void main(String args[])
    {
        Test t = new Test();
        t.fun();
    }
}
