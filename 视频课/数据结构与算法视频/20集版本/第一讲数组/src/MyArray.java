public class MyArray {
    private long[] arr;
    private int elements;

    public MyArray(){
        arr=new long[50];

    }

    public MyArray(int MaxSize){
        arr=new long[MaxSize];
    }
    /**
     *添加数据
     */
    public void Insert(int value){
        arr[elements]=value;
        elements++;
    }

    /**
     * 显示数据
     */
    public void Display(){
        System.out.print("[");
        for (int i=0;i<elements;i++){
            System.out.print(arr[i]+" ");
        }
        System.out.print("]");
    }

    /**
     * 查找数据
     */
    public int Search(long value){
        int i;
        for(i=0;i<elements;i++){
            if(value==arr[i]) {
                break;
            }
        }
        if(i==elements)
        {
            return -1;
        }
        else
        {
            return i;
        }
    }
}
