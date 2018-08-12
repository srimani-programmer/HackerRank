/**
 * NewInstance
 */
public class NewInstance {

    public static void main(String[] args) throws Exception {
        Object o = Class.forName(args[0]).newInstance();

        System.out.println("Object craeted "+ o.getClass().getName());
    }
}