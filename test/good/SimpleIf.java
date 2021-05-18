class Equal {
    public static void main(String[] args) {
        System.out.println(new Check().check());
    }
}

class Check {
    public int check() {
        int a;
        int b;
        int ret;
        ret = -1;
        a = 1;
        b = 43;

        if (b == 43) {
            ret = 1;
        } 
        
        if (a == 1) {
            ret = 42;
        }
        return ret;
    }
}
