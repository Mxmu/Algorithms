public class TestMyArray {
    public static void main(String[] args){
        MyArray arr=new MyArray();
        arr.Insert(13);
        arr.Insert(94);
        arr.Insert(27);

        arr.Display();

        System.out.println();
        System.out.println(arr.Search(94));
    }
}
