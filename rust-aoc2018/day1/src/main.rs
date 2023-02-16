fn main() {
    part_one();
}

fn part_one() {
    let cali = include_str!("input.txt")
        .lines()
        .map(|num| {
            let sign = if num.starts_with('-') { -1 } else { 1 };
            num[1..].parse::<i32>().unwrap() * sign
        })
        .collect::<Vec<_>>();
    let frequency = cali.iter().sum::<i32>();
    println!("{frequency}")
}

#[allow(unused)]
fn part_two() {}
