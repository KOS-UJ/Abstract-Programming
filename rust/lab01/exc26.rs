fn by_ref(x: &i32) -> i32{
    *x + 1
}

fn modifies(x: &mut i32) {
    *x = 1;
}

fn sum(values: &[i32]) -> i32 {
    let mut res = 0;
    for i in 0..values.len() {
        res += values[i]
    }
    res
}

fn main() {
    let mut i = 10;
    let res1 = by_ref(&i);
    let res2 = by_ref(&41);
    modifies(&mut i);
    println!("{} {} {}", res1, res2, i);

    let arr = [10,20,30,40];
    let res = sum(&arr[0..2]); // slice
    println!("sum {} {:?}", res, arr);  //debug print

    let mut v = Vec::new();
    v.push(1);
    v.push(2);
    v.push(3);
    // or
    // let mut v = vec![1, 2, 3];

    v.pop();

    let first = v[0];  // panic if out-of-range
    let maybe_first = v.get(0);

    println!("v is {:?}", v);
    println!("first is {}", first);
    println!("maybe_first is {:?}", maybe_first);


    // String ~ Vec<u8> ~ std::string
    // &str ~ &[u8] ~ const char*
    let mut s = String::new();
    // initially empty!
    s.push('H');
    s.push_str("ello");
    s.push(' ');
    s += "World!"; // short for `push_str`
    // remove the last char
    s.pop();

    assert_eq!(s, "Hello World");
}