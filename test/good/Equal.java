class Equal {
    public static void main(String[] args) {
        System.out.println(new Check().check());
    }
}

class A {

}

class B extends A {

}

class C extends A {

}

class Check {
    public int check() {
        B b;
        A b_a;
        A a;
        int ret;
        b = new B();
        b_a = b;
        a = new A();

        // if (1 == 1 && !(a == b) && !(a == b_a) && (b == b_a)) {
        if (1 == 1 && !(a == b) && !(a == b_a) && (b == b_a)) {
            ret = 1;
        } else {
            ret = 0;
        }
        return ret;
        // return 0;
        // } else {
        // return 0;
        // }
    }
}
