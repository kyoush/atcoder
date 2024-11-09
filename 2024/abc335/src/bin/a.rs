use proconio;

fn main() {
    proconio::input!{
        mut s: String,
    }

    s.pop();
    s.push('4');
    println!("{}", s);
}