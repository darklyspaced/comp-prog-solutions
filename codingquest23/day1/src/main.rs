use std::collections::HashMap;

fn main() {
    solve();
}

fn solve() {
    let input = include_str!("input.txt");
    let mut items: HashMap<&str, u64> = HashMap::new();
    for line in input.lines() {
        let row = line.split(" ").collect::<Vec<_>>();
        if items.contains_key(row.last().unwrap()) {
            *items.get_mut(row.last().unwrap()).unwrap() += row[1].parse::<u64>().unwrap();
        } else {
            items.insert(row.last().unwrap(), row[1].parse::<u64>().unwrap());
        }
    }
    let values: u64 = items.into_values().map(|val| val % 100).product();
    println!("{}", values);
}
