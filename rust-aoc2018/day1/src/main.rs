#![allow(dead_code)]
fn main() {
    part_two();
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

fn part_two() {
    let cali = include_str!("input.txt").lines();
    let mut total = 0;
    let mut prev = vec![];
    for num in cali {
        let sign: i8 = if num.starts_with('-') { -1 } else { 1 };
        let freq = num[1..].parse::<i32>().unwrap() * sign as i32;
        total += freq;
        if prev.contains(&total) {
            println!("{total}");
            return;
        }
        prev.push(total);
    }
    println!("{:#?}\n", prev)
}
