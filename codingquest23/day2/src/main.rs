fn main() {
    let input = include_str!("input.txt");
    for line in input.lines() {
        let line = line.parse::<u32>().unwrap();
        println!("{:?}", line.to_be_bytes());
    }
}
