fn main() {
    let mut input = String::from("");
    let stdin = std::io::stdin();
    stdin.read_line(&mut input).unwrap();
    let values = input.split(" ").collect::<Vec<_>>();
    for i in &values {
        println!("{}", &values);
    }
}
