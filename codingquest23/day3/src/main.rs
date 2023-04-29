#![allow(unused)]

fn main() {
    let file = include_str!("input.txt");
    let (mut o, mut x) = (vec![], vec![]);
    let board = vec![vec![1, 2, 3], vec![4, 5, 6], vec![7, 8, 9]];

    for line in file.lines() {
        x = line
            .split(' ')
            .enumerate()
            .filter(|(pos, num)| {
                let num = num.parse::<u8>().unwrap();
                if pos % 2 == 0 {
                    true
                } else {
                    o.push(num);
                    false
                }
            })
            .map(|tuple| tuple.1.parse::<u8>().unwrap())
            .collect::<Vec<_>>();

        for row in board.iter() {
            row.iter().all(|item| x.contains(item));
        }

        o.clear();
    }
}
