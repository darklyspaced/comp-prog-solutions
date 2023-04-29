fn main() {
    let file = include_str!("input.txt");
    let mut iter = file.lines();
    let fruits = iter.next().unwrap().split(",").collect::<Vec<_>>();
}

fn delta(y: char) -> (u8, u8) {}
